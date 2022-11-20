#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>
#include <QString>

/* Директиви імен таблиць та полів */
#define DATABASE_HOSTNAME   "mailH"
#define DATABASE_NAME       "data.db"

#define TABLE                   "mail"
#define TABLE_SUBJECT           "subj"
#define TABLE_FROM              "adres_from"
#define TABLE_TO                "adres_to"
#define TABLE_DATE              "_date"
#define TABLE_MESSAGE           "message"

// перша колонка id

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QString, QObject *parent = 0);
    ~DataBase();

    // підключення до бази даних та вставлення інформації
    void connectToDataBase();

private:
    // сам обєкт з яким проводиться робота
    QSqlDatabase    db;

private:
    QString path_to_db; // шлях до папки з програм
    /* Внутрішні методи для роботи з базою даних
     * */
    bool openDataBase();        // Відкриття бази даних
    bool restoreDataBase();     // Відновлення бази даних
    void closeDataBase();       // Закриття бази даних
    bool createTable();         // Створення таблиці з баз даних


public slots:
    void clearDataBase();
    bool insertIntoTable(const QVariantList &data);      // Добавлення записів
    bool insertIntoTable(const QString &name, const QString &author, const QString &year, const QString &desc, const QString &pic);
};

#endif // DATABASE_H

