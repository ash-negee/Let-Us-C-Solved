/*(d) Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees. */
#include <stdio.h>
int main(){
    float fah,deg;

    printf("Enter the temprature in degree fahrenheit : ");
    scanf("%f",&fah);

    deg = (fah-32) * 5/9;

    printf("%.4f dF = %.4f dC",fah,deg);
    
    return 0;
}