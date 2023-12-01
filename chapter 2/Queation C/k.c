/*Given the coordinates (x, y) of a center of a circle and it’s radius, 
write a program which will determine whether a point lies inside 
the circle, on the circle or outside the circle. 
(Hint: Use sqrt( ) and pow( ) functions*/
#include <stdio.h>
#include <math.h>
int main() {
    double x0, y0, x1, y1, r, dis;

    printf("Enter the center coordinates (x, y) of the circle: ");
    scanf("%lf %lf", &x0, &y0);
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    printf("Enter the coordinates (x, y) of the point: ");
    scanf("%lf %lf", &x1, &y1);

    dis = sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2));

    if (dis == r) {
        printf("The point is on the circle");
    } else if (dis < r) {
        printf("The point is inside the circle");
    } else {
        printf("The point is outside the circle");
    }

    return 0;
}
