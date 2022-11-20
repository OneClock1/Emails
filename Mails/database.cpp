#include "database.h"

DataBase::DataBase(QString path, QObject *parent) : QObject(parent)
{
    this->path_to_db = path;
}

DataBase::~DataBase()
{}

// підключення до бази даних
void DataBase::connectToDataBase()
{
    // перевірка чи існує бд
    if(!QFile(path_to_db + "/" DATABASE_NAME).exists()){
        this->restoreDataBase();
    } else {
        this->openDataBase();
    }
}

// відновлення бд
bool DataBase::restoreDataBase()
{
    // якшо відкрилась
    if(this->openDataBase()){
        // відновлення
        return (this->createTable()) ? true : false;
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
    return false;
}

// відкриття бд
bool DataBase::openDataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOSTNAME);
    db.setDatabaseName(path_to_db + "/" DATABASE_NAME);
    if(db.open()){
        return true;
    } else {
        return false;
    }
}

// закриття бд
void DataBase::closeDataBase()
{
    db.close();
}

// очищення всіх записів в бд
void DataBase::clearDataBase(){
    QSqlQuery query;
    if(!query.exec( "DELETE FROM " TABLE ";"))
    {
        qDebug() << "DataBase: error of create " << TABLE;
        qDebug() << query.lastError().text();
    }
}

// метод для створення талблиць
bool DataBase::createTable()
{
    // sql запит
    QSqlQuery query;
    qDebug () << "CREATE TABLE " TABLE " ("
                                       "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                                       TABLE_SUBJECT   " VARCHAR(255)   NOT NULL,"
                                       TABLE_FROM      " VARCHAR(255)   ,"
                                       TABLE_TO        " VARCHAR(255)   ,"
                                       TABLE_DATE      " VARCHAR(100)    ,"
                                       TABLE_MESSAGE   " VARCHAR(700) "
                                   " )";
    if(!query.exec( "CREATE TABLE " TABLE " ("
                            "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                            TABLE_SUBJECT   " VARCHAR(255)   NOT NULL,"
                            TABLE_FROM      " VARCHAR(255)   ,"
                            TABLE_TO        " VARCHAR(255)   ,"
                            TABLE_DATE      " VARCHAR(100)    ,"
                            TABLE_MESSAGE   " VARCHAR(700) "
                        " )"
                    )){
        qDebug() << "DataBase: error of create " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}

// вставлення в таблицю
bool DataBase::insertIntoTable(const QVariantList &data)
{
    /* Запит SQL формується із QVariantList,
     * в який передаються дані
     * */
    QSqlQuery query;
    QString s = "INSERT INTO " TABLE " ( " TABLE_SUBJECT ", "
            TABLE_FROM ", "
            TABLE_TO ", "
            TABLE_DATE ", "
            TABLE_MESSAGE " ) "
            "VALUES (:subj, :adres_from, :adres_to, :_date, :message)";
    qDebug() << s;
    query.prepare(s);
    query.bindValue(":subj",       data[0].toString());
    query.bindValue(":adres_from",       data[1].toString());
    query.bindValue(":adres_to",         data[2].toString());
    query.bindValue(":_date",       data[3].toString());
    query.bindValue(":message",    data[4].toString());

    // після чого виконується запит методом exec()
    if(!query.exec()){
        qDebug() << "error insert into " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}

// 2 метод для вставлення в таблиці
bool DataBase::insertIntoTable(const QString &subj, const QString &from, const QString &to, const QString &date, const QString &message)
{
    qDebug() << subj;
                qDebug() << from;
                qDebug() << to;
                qDebug() << date;
                qDebug() << message;
    QVariantList data;
    data.append(subj);
    data.append(from);
    data.append(to);
    data.append(date);
    data.append(message);

    if(insertIntoTable(data))
        return true;
    else
        return false;
}
