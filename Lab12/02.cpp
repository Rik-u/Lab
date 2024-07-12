#include <iostream>
using namespace std;

class Transportation {
public:
    virtual double fare() = 0;
};

class Taxi : public Transportation {
private:
    double distance;

public:
    void setDistance(double d) {
        if (d < 0)
            d = 0;
        distance = d;
    }

    double fare() override {
        return 35 + (distance * 2);
    }
};