/*Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the 
keyboard. A triangle is valid if the sum of all the three angles 
is equal to 180 degrees*/
#include <stdio.h>
int main(){
    
    int x,y,z;
    printf("Enter angles : ");
    scanf("%d %d %d",&x,&y,&z);

    if(x+y+z==180){
        printf("Valid triangle");
    }else
        printf("Invalid triangle");
                
    return 0;
}