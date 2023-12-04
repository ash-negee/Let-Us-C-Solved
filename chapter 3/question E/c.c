/*Write a program to add first seven terms of the following 
series using a for loop: 1/1! + 2/2! + 3/3! …… */
#include <stdio.h>
int main(){

    int num,temp; float factorial,result=0;

    for(int num=1; num<=7; num++){
        temp = num; factorial=1;

        while(temp > 0){
            factorial = factorial*temp;
            temp--;
        }

        result = result + (num/factorial);
    }

    printf("Result is = %.3f",result);

    return 0;
}