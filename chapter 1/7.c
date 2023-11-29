/*(g) If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. 
(Hint: Use the modulus operator ‘%’)*/
#include <stdio.h>
int main(){
    int n,digit,sum=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    while(n>0){
        digit = n%10;
        sum += digit; 
        n /= 10;
    }

    printf("Sum = %d",sum);
    
    return 0;
}