/*(h) If a five-digit number is input through the keyboard, write a 
program to reverse the number.*/
#include <stdio.h>
int main(){
    int n,digit,rev=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    while(n>0){
        digit = n%10;
        rev = rev*10+digit;
        n /= 10;
    }

    printf("Reverse = %d",rev);
    
    return 0;
}