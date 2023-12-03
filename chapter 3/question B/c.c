/*Two numbers are entered through the keyboard. Write a 
program to find the value of one number raised to the power 
of another. */
#include <stdio.h>
#include <math.h>
int main(){
    int num1,num2,power;
    printf("Enter number 1 and 2 : ");
    scanf("%d %d",&num1,&num2);

    power = pow(num1,num2);

    printf("%d^%d = %d",num1,num2,power);

    return 0;
}