/*Given the length and breadth of a rectangle, write a program to 
find whether the area of the rectangle is greater than its 
perimeter. For example, the area of the rectangle with length = 5 
and breadth = 4 is greater than its perimeter.*/
#include <stdio.h>
int main(){
    float l,b,area_rec,peri_rec;

    printf("Enter lenght, breadth and radius : ");
    scanf("%f %f",&l,&b);

    area_rec = l*b;
    peri_rec = 2*(l+b);

    if(area_rec>peri_rec){
        printf("Yes");
    }else
        printf("No");
    
    return 0;
}