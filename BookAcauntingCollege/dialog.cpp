#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}
Dialog::Dialog(QString path, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
     this->path = path;
     ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_add_clicked()
{
    bool ok, ok1;
    int year = ui->inp_year->text().toInt(&ok1, 10),
            count = ui->inp_count->text().toInt(&ok, 10);

    if (!(ok && ok1 && (ui->inp_name->text() != "" && ui->inp_author->text() != "" && ui->inp_com->toPlainText() != "")))
        QMessageBox::critical(0,"error", "Помилка введення");
    else {
        QFile file(path);
        if (file.open(QIODevice::Append)) {
            QTextStream stream(&file);
            stream << "\n" + ui->inp_name->text() + "\n";
            stream << ui->inp_author->text() + "\n";
            stream << ui->inp_year->text() + "\n";
            stream << ui->inp_count->text() + "\n";
            stream << ui->inp_com->toPlainText();
            file.close();
            QMessageBox::information(0,"info", "Підручник успішно додано: ");
        } else QMessageBox::critical(0,"Error", "Не вдалось відкрити файл.");
        close();
    }
}
