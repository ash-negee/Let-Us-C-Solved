/* (a)  Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary*/
#include <stdio.h>
int main(){
    float basic,dearenss,rent,gross;

    printf("Enter the basic salary : ");
    scanf("%f",&basic);

    dearenss= (40*basic)/100;
    rent = (20*basic)/100;
    gross = basic+dearenss+rent;

    printf("%f",gross);
    
    return 0;
}