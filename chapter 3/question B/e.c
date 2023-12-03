/*Write a program to print out all Armstrong numbers between 
1 and 500. If sum of cubes of each digit of the number is 
equal to the number itself, then the number is called an 
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 
* 5 ) + ( 3 * 3 * 3 )*/
#include <stdio.h>
int main(){
    int sum,temp;

    for(int num=1; num<=500; num++){
        temp = num;sum = 0;
        while(temp>0){
            int rem = temp%10;
            sum = sum+(rem*rem*rem);
            temp /= 10;
        }
        if(sum==num){
            printf("%d\n",num);
        }
    }

    return 0;
}