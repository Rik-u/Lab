#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point
{
    double xPosition;
    double yPosition;
} point;

class Circle
{
private:
    point center;
    double radius;

public:
    Circle(point pt, double radius)
    {
        this->center.xPosition = pt.xPosition;
        this->center.yPosition = pt.yPosition;
        this->radius = radius;
    }

    double area()
    {
        return M_PI * pow(radius, 2);
    }

    double distanceFromCenter(point pt)
    {
        return sqrt(pow((center.xPosition - pt.xPosition), 2) + pow((center.yPosition - pt.yPosition), 2));
    }

    double contains(point pt)
    {
        return distanceFromCenter(pt) <= radius;
    }
};

int main() {
    double x_cord, y_cord, radius;

    cout << "Center of Circle: ";
    cin >> x_cord >> y_cord;
    point center = {x_cord, y_cord};

    cout << "Radius of Circle: ";
    cin >> radius;
    
    Circle circle(center, radius);

    cout << "Point to Check: ";
    cin >> x_cord >> y_cord;
    point P = {x_cord, y_cord};

    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point (" << x_cord << ", " << y_cord << ") is " << circle.distanceFromCenter(P) << endl;
    
    
    if (circle.contains(P))
        cout << "This circle contains this point." << endl;
    else
        cout << "This point is not in this circle." << endl;

}