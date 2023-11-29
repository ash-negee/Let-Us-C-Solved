/*(l) If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item.*/
#include <stdio.h>
int main(){
    float total_price,profit;

    printf("Enter total price : ");
    scanf("%f",&total_price);
    printf("Enter profit : ");
    scanf("%f",&profit);

    printf("Price per item = %.4f",(total_price/15) - (profit/15));

    return 0;
}