#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    Dialog (QString path, QWidget *parent = nullptr);

    ~Dialog();

private slots:
    void on_btn_add_clicked();

private:
    Ui::Dialog *ui;
    QString path;
};

#endif // DIALOG_H
