#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();

public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Pet : public Animal
{
private:
    string name;

public:
    Pet(string, int, int, int);
    string getName();
    void setName(string);
};

Animal::Animal(int happiness, int energy, int fullness)
{
    this->happiness = happiness;
    this->energy = energy;
    this->fullness = fullness;
    limitStat();
}

void Animal::limitStat()
{
    if (happiness > 100)
        happiness = 100;
    if (happiness < 0)
        happiness = 0;
    if (energy > 100)
        energy = 100;
    if (energy < 0)
        energy = 0;
    if (fullness > 100)
        fullness = 100;
    if (fullness < 0)
        fullness = 0;
}

int Animal::getHappiness()
{
    limitStat();
    return happiness;
}

int Animal::getEnergy()
{
    limitStat();
    return energy;
}

int Animal::getFullness()
{
    limitStat();
    return fullness;
}

void Animal::eat(int food)
{
    if (food <= 0)
        return;
    fullness += food;
    if (fullness > 100)
    {
        happiness -= 10;
    }
    limitStat();
}

void Animal::play(int hour)
{
    if (hour <= 0)
        return;
    for (; hour > 0; hour--)
    {
        if (energy <= 0 || fullness <= 0)
        {
            return;
        }
        energy = energy - (hour * 10);
        fullness = fullness - (hour * 20);
        happiness = happiness + (hour * 5);
        limitStat();
    }
    limitStat();
}

void Animal::sleep(int hour)
{
    if (hour <= 0)
        return;
    energy = energy + (hour * 10);
    fullness = fullness - (hour * 10);
    limitStat();
}

Pet::Pet (string name, int happiness, int energy, int fullness) : Animal (happiness, energy, fullness){
    this->name = name;
}

string Pet::getName() {
    return name;
}

void Pet::setName(string name) {
    this->name = name;
}

int main (){}