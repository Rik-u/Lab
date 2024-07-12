#include <iostream>
using namespace std;

class Transportation
{
public:
    virtual double fare() = 0;
};

class Taxi : public Transportation
{
private:
    double distance;

public:
    void setDistance(double d)
    {
        if (d < 0)
            d = 0;
        distance = d;
    }

    double fare() override
    {
        return 35 + (distance * 2);
    }
};

class BmtaBus : public Transportation
{
public:
    double fare() override
    {
        return 6.50;
    }
};

class BTS : public Transportation
{
private:
    int stationCount;

public:
    void setStation(int station)
    {
        stationCount = station;
    }

    double fare() override
    {
        return 15 + (5 * stationCount);
    }
};

class Passenger {
private:
    double totalFare = 0;

public:
    void addTransportation(Transportation &trans) {
        totalFare += trans.fare();
    }

    double getTotalFare() {
        return totalFare;
    }
};