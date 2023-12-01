/*A library charges a fine for every book returned late. For first 
5 days the fine is 50 paise, for 6-10 days fine is one rupee and 
above 10 days fine is 5 rupees. If you return the book after 30 
days your membership will be cancelled. Write a program to 
accept the number of days the member is late to return the 
book and display the fine or the appropriate message.*/
#include <stdio.h>
int main(){
    int days;
    printf("Enter the no of days : ");
    scanf("%d",&days);

    if(days<6){
        printf("Fine is %.2f rupees", 0.5*days);
    }else if(days > 5 && days < 11){
        printf("Fine is %d rupees", days);
    }else if(days>10 && days < 30){
        printf("Fine is %d rupees", 5*days);
    }else if(days>=30){
        printf("Your membership is cancelled");
    }

    return 0;
}