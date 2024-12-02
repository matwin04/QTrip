#ifndef DBHANDLER_H
#define DBHANDLER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
class dbHandler {
public:
    dbHandler();
    ~dbHandler();
    //Create a table for the trip
    bool createTripTable();
    bool addTrip(
        const QString &TripName,
        const QString &startDate,
        const QString &endDate,
        int peopleCount
        );

    QSqlQuery getTrips();

    void setTripName(const QString &name);
    QString getTripName() const;
private:
    QSqlDatabase db;
    QString tripName;
};

#endif // DBHANDLER_H
