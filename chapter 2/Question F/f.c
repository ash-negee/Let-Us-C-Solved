/*If the three sides of a triangle are entered through the 
keyboard, write a program to check whether the triangle is 
valid or not. The triangle is valid if the sum of two sides is 
greater than the largest of the three sides*/
#include <stdio.h>
int main(){

    float side1,side2,side3;
    printf("Enter Side 1, Side 2 and Side 3 : ");
    scanf("%f %f %f",&side1,&side2,&side3);

    if(side1>side2 && side1 > side3){
        if(side1>side2+side3){
            printf("Valid Triangle");
        }else
            printf("Invalid Triangle");
    }else if(side2>side1 && side2>side3){
        if(side2>side1+side3){
            printf("Valid Triangle");
        }else
            printf("Invalid Triangle");
    }else if(side3>side1 && side3>side2){
        if(side3>side1+side2){
            printf("Valid Triangle");
        }else
            printf("Invalid Triangle");
    }

    return 0;
}