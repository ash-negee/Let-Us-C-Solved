/*(C) Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not. 
(Hint: Use the % (modulus) operator) 
*/
#include <stdio.h>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || year%400==0){
        printf("Leap Year");
    }else
        printf("Not a Leap Year");
        
    return 0;
}