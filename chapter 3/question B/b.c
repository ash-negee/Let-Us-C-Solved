/*Write a program to find the factorial value of any number 
entered through the keyboard.*/
#include <stdio.h>
int main(){

    int num,factorial=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    int temp = num;

    if(num>=0){
        while(temp>0){
            factorial = factorial*temp;
            temp--;
        }
        printf("Factorial of %d = %d", num,factorial);
    }else
        printf("Not defined");

    return 0;
}