#include <iostream>
using namespace std;

class Transportation
{
public:
    virtual double fare() = 0;
};

class BTS : public Transportation {
private:
    int stationCount;

public:
    void setStation(int station) {
        stationCount = station;
    }

    double fare() override {
        return 15 + (5 * stationCount);
    }
};