/*(a) If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred*/
#include <stdio.h>
int main(){
    float cost_price,selling_price;
    printf("Enter cost price and selling price : ");
    scanf("%d %d",&cost_price,&selling_price);

    if(selling_price>cost_price){
        printf("Profit");
    }else if(selling_price<cost_price){
        printf("Loss");
    }else
        printf("No profit or loss");
        
    return 0;
}