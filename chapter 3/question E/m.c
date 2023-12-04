/*The natural logarithm can be approximated by the following 
series. 
If x is input through the keyboard, write a program to 
calculate the sum of first seven terms of this series. */
#include <stdio.h>
#include <math.h>
int main(){

    float x,sum=0,temp;

    printf("Enter x : ");
    scanf("%f", &x);

    temp = (x-1)/x;
    sum = sum + temp;                   // for x = 1;

    for(int i=2;i<=7;i++){              // x = 1 is already calculated so starting from 2
        sum = sum + pow(temp,i)/2;
    }
    
    printf("Sum of first seven terms of the series = %.5f",sum);


    return 0;
}

