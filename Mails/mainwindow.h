#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <QSqlTableModel>
#include <QString>

#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ShowLetter();
    void HideLetter();

private slots:
    void on_btn_add_letter_triggered();
    void slotCurrent(QModelIndex index);
    void on_btn_del_db_triggered();
    void on_searchLine_textChanged(const QString &arg1);
    void on_btn_help_triggered();
    void on_btn_about_triggered();

    void on_btn_to1_triggered();

    void on_label_4_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();

    DataBase        *db;
    QSqlTableModel  *model;

};
#endif // MAINWINDOW_H
