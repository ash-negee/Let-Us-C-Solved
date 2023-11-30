/*(D) A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not. */
#include <stdio.h>
int main(){
    int n,digit,rev=0;

    printf("Enter the number : ");
    scanf("%d",&n);
    int temp = n;

    while(n>0){
        digit = n%10;
        rev = rev*10+digit;
        n /= 10;
    }

    printf("Reverse = %d\n",rev);

    if(temp==rev){
        printf("Number and Reverse are same\n");       
    }else
        printf("Number and Reverse are not same");
    
    return 0;
}