/*If the ages of Ram, Shyam and Ajay are input through the 
keyboard, write a program to determine the youngest of the 
three*/
#include <stdio.h>
int main(){
    int ram,shyam,ajay,youngest;
    printf("Enter age of Ram : ");
    scanf("%d",&ram);
    printf("Enter age of Shyam : ");
    scanf("%d",&shyam);
    printf("Enter age of Ajay : ");
    scanf("%d",&ajay);

    if(ram < shyam && ram < ajay){
        printf("Ram");
    }else if(shyam < ram && shyam <ajay){
        printf("Shyam");
    }else
        printf("Ajay");
                
    return 0;
}