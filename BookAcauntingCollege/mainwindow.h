#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>


#include "dialog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class book {
public:
    QString name,
        author,
        coment;
    int year,
        count;
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void search();
    void add_to_table(book);
    void load();

private slots:
    void on_btn_open_triggered();
    void on_btn_add_clicked();
    void on_btn_create_triggered();
    void on_inp_search_textChanged(const QString &arg1);
    void on_btn_add_menu_triggered();
    void on_btn_about_triggered();
    void on_btn_info_triggered();

private:
    QList <book> books;
    Ui::MainWindow *ui;
    QString path = "";
    QStringList headers = {"Назва", "Автор", "Рік" , "Кількість", "Примітка"};

};
#endif // MAINWINDOW_H
