/*Given a point (x, y), write a program to find out if it lies on the 
x-axis, y-axis or at the origin, viz. (0, 0).*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter (x,y) : ");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0){
        printf("Point lies on the origin");
    }else if(x==0){
        printf("Point lies on y-axis");
    }else if(y==0){
        printf("Point lies on x-axis");
    }else
        printf("Not on x as well as on y-axis!");
        
    return 0;
}