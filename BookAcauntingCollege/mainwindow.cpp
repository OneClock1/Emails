#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->table->setHorizontalHeaderLabels(headers);  //встановлюєм заголовки таблиці
    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);  //забороняєм редагування таблиці
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_open_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open file"), ".", tr("Data files (*.dat)"));
    this->path= fileName;
    books.clear();
    load(); // загрузка файлов
    search();
}

void MainWindow::on_btn_add_clicked()
{
    if (path != ""){
        Dialog * dg = new Dialog(path);
        dg->show();
        dg->exec();
        load();
        search();
    }
    else QMessageBox::information(0,"Error", "Файл не відкрито");
}

void MainWindow::on_btn_create_triggered()
{
    QString path_to_file = QFileDialog::getSaveFileName(nullptr, "Crete file", ".", "Data files (*.dat)" );
    QFile file(path_to_file);
    if (file.open(QIODevice::WriteOnly)) {
        path = path_to_file;
        file.close();
        QMessageBox::information(0,"info", "Файл успішно створено: " + path_to_file);
    } else QMessageBox::critical(0,"Error", "Не вдалось створити файл.");
}

void MainWindow::search(){
    ui->table->setRowCount(0);

    QList<book>::const_iterator i;
    for (i = books.begin(); i != books.end(); ++i)
    {
        bool ok = false;
        switch(ui->drop->currentIndex())
        {
        case 0: {
            if (i->name.contains(ui->inp_search->text()))
            {
                add_to_table({i->name, i->author, i->coment, i->year, i->count});
            }
            break;
        }
        case 1: {
            if (i->author.contains(ui->inp_search->text()))
            {
                add_to_table({i->name, i->author, i->coment, i->year, i->count});
            }
            break;
        }
        case 2: {
            if (i->year == ui->inp_search->text().toInt(&ok, 10))
            {
                if (ok)
                    add_to_table({i->name, i->author, i->coment, i->year, i->count});
            }
            break;
        }
        case 3: {
            if (i->count == ui->inp_search->text().toInt(&ok, 10))
            {
                if (ok)
                    add_to_table({i->name, i->author, i->coment, i->year, i->count});
            }
            break;
        }
        case 4: {
            if (i->coment.contains(ui->inp_search->text()))
            {
                add_to_table({i->name, i->author, i->coment, i->year, i->count});
            }
            break;
        }
        }
    }
}

void MainWindow::add_to_table(book item){
    ui->table->setRowCount(ui->table->rowCount() + 1);  // додає рядок до табоиці
    ui->table->setItem(ui->table->rowCount() - 1, 0, new QTableWidgetItem(item.name));
    ui->table->setItem(ui->table->rowCount() - 1, 1, new QTableWidgetItem(item.author));
    ui->table->setItem(ui->table->rowCount() - 1, 2, new QTableWidgetItem(QString::number(item.year)));
    ui->table->setItem(ui->table->rowCount() - 1, 3, new QTableWidgetItem(QString::number(item.count)));
    ui->table->setItem(ui->table->rowCount() - 1, 4, new QTableWidgetItem(item.coment));
    ui->table->resizeColumnsToContents();           //підганяєм розміри стовпця
//    ui->table->horizontalHeader()->stretchLastSection();
    ui->table->horizontalHeader()->setStretchLastSection(true);
}

void MainWindow::load(){
    QFile file(path);                                           //відкриваєм файл
    if (file.open(QIODevice::ReadOnly)){                           //якшо файл не відкрито викидаєм помилку
        QTextStream in(&file);          //читаєм із файлу
        int i = 0;
        QString str, name, author;
        int year, count;
        books.clear();  //очищаєм дані що були зчитані раніше
        str = in.readLine();
        while(!in.atEnd())  //читаєм файл до кінця
        {
            str = in.readLine();
            switch (i%5) {
            case 0:
                name = str;
                break;
            case 1:
                author = str;
                break;
            case 2:
                year = str.toInt();
                break;
            case 3:
                count = str.toInt();
                break;
            case 4: {
                books.push_back({name, author, str, year, count});
                break;
            }
            }
            i++;
        }
        file.close();
    } else
        QMessageBox::warning(0, "warn", "Файл не було відкрито.");
}

void MainWindow::on_inp_search_textChanged(const QString &arg1)
{
    search();
}

void MainWindow::on_btn_add_menu_triggered()
{
    if (path != ""){
        Dialog * dg = new Dialog(path);
        dg->show();
        dg->exec();
        load();
        search();
    }
    else QMessageBox::information(0,"Error", "Файл не відкрито");
}

void MainWindow::on_btn_about_triggered()
{
    QMessageBox::about(this, tr("Про розробника"),
                             tr("Програма створена під час курсової роботи, для системного програмування.\n"
                                "\n\tРозробник:\t\tКирилюк Денис Олегович"
                                "\n\tНавчальний заклад:\t«Тернопільський Фаховий Коледж Тернопільського Національного Технічного Університету Імені Івана Пулюя»"
                                "\n\tГрупа:\t\t\tKI-412"
                                "\n\tEmail:\t\t\tkiriliuk.d08@gmail.com"));
}

void MainWindow::on_btn_info_triggered()
{
    QMessageBox::information(0, "Інструкція", "Перед початком використання необхідно відкрити або створити файл\n -Ctrl + O або Файл -> Відкрити файл для відкриття файлу\n -Ctrl + N або Файл -> Створити файл для створення файлу\nДля того щоб додати підручник (тільки якщо файл відкрито) потрібно:\n 1) Натиснути на кнопку Додати підручник або використати меню Підручник -> Додати підручник;\n 2) Заповнити всі поля у діалоговому вікні, що з'явиться(поля Рік та Кількість повинні бути цілочисельними);\n 3) Натиснути кнопку Додати.\n Для здійснення пошуку достатньо вибрати в комбо боксі по якому полю здійснювати пошук та ввести стрічку у відповідне поле для вводу. Правила пошуку: \n - пошук по елементах Рік та Кількість здійснюється за умови повної рівності (12 = 12);\n - по всіх інших елементах за умови, що шукана стрічка міститься в елементі (елемент: \"Нічний цирк\" пошук: \"цирк\").\nСортування здійснюється по натиснені на заголовок таблиці.");

}
