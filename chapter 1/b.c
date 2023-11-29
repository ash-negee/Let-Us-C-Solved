/* (b)  The distance between two cities (in km.) is input through the 
    keyboard. Write a program to convert and print this distance 
    in meters, feet, inches and centimeters.*/
#include <stdio.h>
int main(){
    float distance,meters,feet,inches,cm;

    printf("Enter the distance : ");
    scanf("%f",&distance);
    
    meters = distance*1000;
    feet = meters*3.28084;
    inches = feet*12;
    cm = inches*2.54;
    
    printf("meters = %f m\nfeet = %f feet\ninches = %f inches\ncentimeter = %f",meters,feet,inches,cm);

    return 0;
}