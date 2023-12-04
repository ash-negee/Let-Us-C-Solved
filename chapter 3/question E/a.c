/*Write a program to print all prime numbers from 1 to 300. 
(Hint: Use nested loops, break and continue) */
#include <stdio.h>
int main(){
    int count;
    
    for(int num = 2; num<=100; num++){
        count=0;
        for(int i=1; i<=num ; i++){
            if(num%i==0){
                count++;
            }
            if(count>2){
                break;
            }
        }
        if(count!=2){
            continue;
        }else
            printf("%d\n",num);
    }

    return 0;
}