#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->dateEdit->setDate(QDate::fromString("Fri, 22 May 2020 09:00:13 +0000", Qt::RFC2822Date));
    // ui->date->setDate(QDate::fromString("Fri, 22 May 2020 09:00:13 +0000", Qt::RFC2822Date));
    //ui->dateTime->setDateTime(QDateTime::fromString("Fri, 22 May 2020 09:00:13 +0000", Qt::RFC2822Date));

    db = new DataBase(qApp->applicationDirPath());
    db->connectToDataBase();

    // стовпці в таблиці
    this->setupModel(TABLE,
                     QStringList() << tr("id")
                     << tr("Тема")
                     << tr("Від")
                     << tr("До")
                     << tr("Дата")
                     << tr("Повідомлення")
                     );

    HideLetter();
    ShowLetter();
    this->createUI();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowLetter()
{
    ui->img->hide();
    ui->labelText->hide();

    ui->label->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->line_to->show();
    ui->line_from->show();
    ui->line_subj->show();
    ui->text_Message->show();
    ui->dateTime->show();
}

void MainWindow::HideLetter()
{
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->line_to->hide();
    ui->line_from->hide();
    ui->line_subj->hide();
    ui->text_Message->hide();
    ui->dateTime->hide();

}

void MainWindow::setupModel(const QString &tableName, const QStringList &headers)
{
    model = new QSqlTableModel(this);
    model->setTable(tableName);

    // назви стовпців
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i,Qt::Horizontal,headers[j]);
    }
}

void MainWindow::createUI()
{
    ui->mailList->setModel(model);     // встановлює модель на TableView
    ui->mailList->setColumnHidden(0, true);    // Приховує колонку з id
    ui->mailList->setColumnHidden(5, true);    // Приховує колонку з зображенням
    ui->mailList->setColumnHidden(4, true);
    ui->mailList->setColumnHidden(3, true);
    ui->mailList->setColumnHidden(2, true);


    // дозволяє виділенння рядків
    ui->mailList->setSelectionBehavior(QAbstractItemView::SelectRows);
    // режим виділення лише одного рядку
    ui->mailList->setSelectionMode(QAbstractItemView::SingleSelection);
    // розмір колонок по вмісту
    ui->mailList->resizeColumnsToContents();
    ui->mailList->setEditTriggers(QAbstractItemView::NoEditTriggers);  // Забороняє редагування
    ui->mailList->horizontalHeader()->setStretchLastSection(true);     // розтягує останню колонку


    connect(ui->mailList->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
            this, SLOT(slotCurrent(QModelIndex)));

    model->select(); // Отримуєм дані
}

void MainWindow::slotCurrent(QModelIndex index)
{
    ShowLetter();
    // встанов зображення в label
    ui->line_to->setText(model->data(model->index(index.row(), 3)).toString());
    ui->line_from->setText(model->data(model->index(index.row(), 2)).toString());
    ui->dateTime->setDateTime(QDateTime::fromString(model->data(model->index(index.row(), 4)).toString(), Qt::RFC2822Date));
    ui->text_Message->setHtml(model->data(model->index(index.row(), 5)).toString());
    ui->line_subj->setText( model->data(model->index(index.row(), 1)).toString());
}

void MainWindow::on_btn_add_letter_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open file"), ".", tr("Data files (*.eml)"));
    QFile file(fileName);                                   //відкриваємо файл
    if (file.open(QIODevice::ReadOnly)){                           //якщо файл не відкрито викидаєм помилку
        QTextStream in(&file);          //читаєм із файлу
        QString str,temp;
        QByteArray b64;

        QString s,f,t,d,m;

        QFileInfo info(fileName);

        qDebug() << info.fileName();

        s = info.fileName().mid(0, info.fileName().length() - 3);
        bool message = false;

        while(!in.atEnd())  //читаєм файл до кінця
        {
            temp = in.readLine();

            //            qDebug() << temp;
            {
                if (str.contains("base64"))
                {
                    str = "";
                    temp =  in.readAll();
                   // qDebug() << temp;
                    for (int i = 0; i< temp.length() && temp[i] != '-'; i++)
                        str += temp[i];
                    str.replace("\n", "");
                    str.replace("\r", "");
                    //qDebug() << temp[0];

                    //qDebug() << "\n\n" <<  str;
                    b64 <= str;
                    b64 = QByteArray::fromBase64(b64);

                    m = b64.data();
                    ui->text_Message->setHtml(b64.data());
                    break;
                } else
                    if (temp.contains(":"))
                    {
                        if (str.contains("=?"))
                        {
                            int pl = str.indexOf("=?");
                            //qDebug() << pl << str.indexOf('<') ;
                            str = str.remove(pl ,str.indexOf("<") - pl );

                        }

                        if (str.indexOf("From:") == 0)
                        {
                            f = str.mid(5, str.length());
                            ui->line_from->setText(str.mid(5, str.length()));
                        } else
                            if (str.indexOf("To:") == 0)
                            {
                                t = str.mid(3, str.length());
                                ui->line_to->setText(str.mid(3, str.length()));
                            } else
                                if (str.indexOf("Date:") == 0)
                                {
                                    d = str.mid(6, str.length());
                                    ui->dateTime->setDateTime(QDateTime::fromString(str.mid(6, str.length()), Qt::RFC2822Date));
                                }


                        str = temp;
                    } else {
                        str += temp;
                    }

            }

        }

        file.close();


        qDebug () <<
        db->insertIntoTable(s,f,t,d,m);

        model->select();
    } else QMessageBox::warning(0, "warn", "Файл не було відкрито.");
}


void MainWindow::on_btn_del_db_triggered()
{
    int ret = QMessageBox::information(this, tr("База даних"),tr("Ви дійсно бажаєте очистити базу даних?"),
                                       QMessageBox::Yes | QMessageBox::No);

    // натиснуто YES
    if (ret == 16384)
    {
        db->clearDataBase();
        model->select();
    }
}

void MainWindow::on_searchLine_textChanged(const QString &arg1)
{
    for (int i = 0; i < ui->mailList->model()->rowCount(); i++)
        if (model->data(model->index(i, 1)).toString().contains(arg1))
        {
            ui->mailList->selectRow(i);
            break;
        }
}

void MainWindow::on_btn_help_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_btn_about_triggered()
{
    QMessageBox::information(0, "Info", "Програму написав для курсової роботи\n на тему: Розробка програмного забезпечення \"Облік електронної пошти\"\nіз системного програмування\nстудент групи КІ-407п\Висоцький Вадим Васильович\n2021р");
}

void MainWindow::on_btn_to1_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_label_4_linkActivated(const QString &link)
{

}

