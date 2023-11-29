/*(i) If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,digit,sum=0;

    printf("Enter 4 digit number : ");
    scanf("%d",&n);

    int first = n/1000,last = n%10;

    // if no is negative, so last digit ko +ve bnaya hai
    printf("Sum of first and last digits = %d",first+abs(last));
    
    return 0;
}