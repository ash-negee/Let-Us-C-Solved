/*Write a program to find the range of a set of numbers. Range 
is the difference between the smallest and biggest number in 
the list.*/
#include <stdio.h>
int main(){

    int num,min,max,range; char choice;

    printf("Enter the number : ");
    scanf("%d",&num);
    min=max=num;

    do{
        printf("Enter the number : ");
        scanf("%d",&num);
        if(num>max){
            max=num;
        }else if(num<min){
            min=num;
        }

        printf("Do you want to enter another number y or n : ");
        scanf(" %c",&choice); 
        
    }while(choice=='y');

    range = max-min;
    printf("Range is = %d", range);

    return 0;
}