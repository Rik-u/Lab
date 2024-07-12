#include <iostream>
using namespace std;

class Transportation {
public:
    virtual double fare() = 0;
};

class BmtaBus : public Transportation {
public:
    double fare() override {
        return 6.50;
    }
};