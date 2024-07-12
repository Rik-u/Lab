#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point
{
    double xPosition;
    double yPosition;
} point;

class Circle {
private:
    point center;
    double radius;

public:
    Circle(point pt, double radius) {
        this->center.xPosition = pt.xPosition;
        this->center.yPosition = pt.yPosition;
        this->radius = radius;
    }

    double area() {
        return M_PI*pow(radius, 2);
    }

    double distanceFromCenter(point pt) {
        return sqrt(pow((center.xPosition - pt.xPosition), 2)+pow((center.yPosition - pt.yPosition), 2));
    }

    double contains(point pt) {
        return distanceFromCenter(pt) <= radius;
    }
};

int main() {
    point a_point = {1.00, 1.00};
    point another_point = {5.00 , 1.00};
    Circle myCircle(a_point, 3);
    
    cout << myCircle.area() << endl;
    cout << myCircle.distanceFromCenter(another_point) << endl;
    cout << myCircle.contains(another_point) << endl;
}