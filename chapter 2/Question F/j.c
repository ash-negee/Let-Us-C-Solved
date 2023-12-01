/*The policy followed by a company to process customer orders 
is given by the following rules: 
(a) If a customer order is less than or equal to that in stock 
and has credit is OK, supply has requirement. 
(b) If has credit is not OK do not supply. Send him 
intimation. 
(c) If has credit is Ok but the item in stock is less than has 
order, supply what is in stock. Intimate to him data the 
balance will be shipped. 
Write a C program to implement the company policy.*/
#include <stdio.h>
int main(){
    int credit,order;
    printf("Is credit OK ? 1 for Yes & 0 for No : ");
    scanf("%d",&credit);
    printf("Is order is less than or equal to stock ? 1 for Yes & 0 for No : ");
    scanf("%d",&order);

    if(order==1 && credit==1){
        printf("Supply has requirement");
    }else if(credit==0){
        printf("Do not supply");
    }else if(credit==1 && order==0){
        printf("Balance will be shipped");
    }
        
    return 0;
}