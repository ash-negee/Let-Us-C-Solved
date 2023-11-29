/*(k) A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer. */
#include <stdio.h>
int main(){
    int amount;
    printf("Enter the amount : ");
    scanf("%d",&amount);

    int hundred = amount/100;
    amount%=100;

    int fifty = amount/50;
    amount%=50;

    int ten = amount/10;
    amount%=10;

    printf("No of 100s = %d\nNo of 50s = %d\nNo of 10s = %d",hundred,fifty,ten);
    return 0;
}