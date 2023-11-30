/*Find the absolute value of a number entered through the 
keyboard.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int no;
    
    printf("Enter the number : ");
    scanf("%d",&no);

    printf("Absolute of %d = %d",no,abs(no));
  
    return 0;
}