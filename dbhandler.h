#ifndef DBHANDLER_H
#define DBHANDLER_H

#include <QObject>

class dbHandler
{
public:
    dbHandler();
    bool createTripTable();
    bool addTrip(const QString &tripName, const QString &startDate, const QString &endDate, int peopleCount);

};

#endif // DBHANDLER_H
