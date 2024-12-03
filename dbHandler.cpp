#include "dbHandler.h"
#include <QString>
#include <QDebug>
//Constructor
dbHandler::dbHandler() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("trips.db");
    if (!db.open()){
        qDebug() << "Error Connection Failed";
    } else {
        qDebug() << "Succsess";
    }
}
//Destructor
dbHandler::~dbHandler(){
    if (db.isOpen()){
        db.close();
        qDebug() << "DB Closed";
    }
}
//Create tr
bool dbHandler::createTripTable(){
    QSqlQuery query;
    QString createTableQuery =
        "CREATE TABLE IF NOT EXISTS trips ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT, "
        "tripName TEXT, "
        "startDate TEXT, "
        "endDate TEXT, "
        "peopleCount INTEGER)";
    if (!query.exec(createTableQuery)){
        qDebug() << "Failed to create table" << query.lastError().text();
        return false;
    }
    return true;
}

//get all trips from the db
QSqlQuery dbHandler::getTrips(){
    QSqlQuery query("SELECT * FROM trips");
    if (!query.exec()){
        qDebug() << "Failed to fetch trips" << query.lastError().text();
    }
    return query;
}

// Set current trip
void dbHandler::setTripName(const QString &name)const{
    tripName = name;
}
// Get the current trip name
void dbHandler::getTripName() const {
    return tripName;
}
