/*(e) The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle.*/
#include <stdio.h>
int main(){
    float l,b,r,area_rec,peri_rec,area_circle,circum_circle;

    printf("Enter lenght, breadth and radius : ");
    scanf("%f %f %f",&l,&b,&r);

    area_rec = l*b;
    peri_rec = 2*(l+b);
    area_circle = 3.14*r*r;
    circum_circle = 2*3.14*r;

    printf("Area of rect = %.3f\nPerimeter of rect = %.3f\nArea of circle = %.3f\nCircumference = %.3f",area_rec,peri_rec,area_circle,circum_circle);
    
    return 0;
}