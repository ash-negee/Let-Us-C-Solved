/*If the three sides of a triangle are entered through the 
keyboard, write a program to check whether the triangle is 
isosceles, equilateral, scalene or right angled triangle. */
#include <stdio.h>
int main(){
    float a,b,c,d,e,f;
    printf("Enter the three sides of triangle : ");
    scanf("%f %f %f",&a,&b,&c);

    d = ((a*a)+(b*b)-(c*c));
    e = ((b*b)+(c*c)-(a*a));
    f = ((c*c)+(a*a)-(b*b));

    if(a==b && b==c){
        printf("Equilateral triangle");
    }else if(a==b && b!=c || b==c && c!=a || c==a && a!=b){
        printf("Isoscales triangle");
    }else if(a!=b && b!=c && c!=a){
        printf("Scalene triangle");
    }else if(d==0 || e==0 || f==0){
        printf("Right angle triangle");
    }

    return 0;
}