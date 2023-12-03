/*Write a program to find the octal equivalent of the entered 
number*/
#include <stdio.h>
int main(){
    
    int num,temp,quotient=1,remainder,octal=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp = num;

    while(temp>0){
        remainder = temp%8;
        octal = octal*10+remainder;
        temp /= 8;
    }

    //Reverse the octal number
    temp = octal;octal=0;
    while(temp>0){
        remainder = temp%10;
        octal = octal*10+remainder;
        temp /= 10;
    }

    printf("octal  = %d",octal);

    return 0;
}