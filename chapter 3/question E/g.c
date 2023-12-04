/*Write a program to fill the entire screen with diamond and 
heart alternatively. The ASCII value for heart is 3 and that of 
diamond is 4*/
#include <stdio.h>
int main(){

    for(int i=1;i<=10000;i++){
        printf("%c %c ",3,4);
    }

    return 0;
}

