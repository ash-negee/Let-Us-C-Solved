/*Write a program to generate all combinations of 1, 2 and 3 
using for loop.*/

#include <stdio.h>
int main(){

    for(int a = 1; a<=3; a++){
        for(int b=1; b<=3; b++){
            for(int c=1; c<=3; c++){
                printf("%d%d%d\n", a,b,c);
            }
        }
    }

    return 0;
}