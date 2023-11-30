/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a 
program to check if all the three points fall on one straight line. 
*/

#include <stdio.h>
int main() {
    int x1, x2, x3, y1, y2, y3;

    printf("Enter (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter (x3, y3): ");
    scanf("%d %d", &x3, &y3);

    if ((x2 - x1) != 0 && (x3 - x2) != 0) {
        if (((y3 - y2) / (x3 - x2)) == ((y2 - y1) / (x2 - x1))) {
            printf("Points fall on one straight line\n");
        } else {
            printf("No\n");
        }
    } else {
        printf("Error: Division by zero\n");
    }

    return 0;
}
