#ifndef TRIP_H
#define TRIP_H

#include <QString>
//Base Class for trips (Common Properties)
class Trip{
public:
    Trip(
        const QString &name,
        const QString &start,
        const QString &end,
        int people)
        :tripName(name),startDate(start),peopleCount(people){}
    virtual ~Trip() = default;

    QString getTripName() const {return tripName;}
    QString getStartDate() const {return startDate;}
    QString getEndDate() const {return endDate;}
    int getPeopleCount() const {return peopleCount;}
    //Mutators
    void setTripName(const QString &name){tripName=name;}

    //pure virtual func for trip details
    virtual void tripDetails() const = 0;
protected://protected so derived classes can acess them
    QString tripName;
    QString startDate;
    QString endDate;
    int peopleCount;

};

#endif // TRIP_H
