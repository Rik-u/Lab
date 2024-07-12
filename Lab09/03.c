#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point {
    double x_cord;
    double y_cord;
};

int main() {
    int point_count;
    printf("Number of Points: ");
    scanf("%d", &point_count);
    struct Point points[point_count];
    for (int i = 0; i < point_count; i++) {
        printf("P%d.X: ", i+1);
        scanf("%lf", &points[i].x_cord);
        printf("P%d.Y: ", i + 1);
        scanf("%lf", &points[i].y_cord);
    }
    printf("Length:\n");
    for (int i = 0; i < point_count-1; i++) {
        double dX = points[i].x_cord - points[i + 1].x_cord, dY = points[i].y_cord - points[i + 1].y_cord;
        double length = sqrt(pow(dX, 2) + pow(dY, 2)); 
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n",i+1, points[i].x_cord, points[i].y_cord, i+2, points[i+1].x_cord, points[i+1].y_cord, length);
    }

}