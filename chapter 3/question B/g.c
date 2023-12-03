/*Write a program to enter the numbers till the user wants and 
at the end it should display the count of positive, negative and 
zeros entered*/
#include <stdio.h>
int main(){
    int num,negative=0,zero=0,positive=0;
    char want;
    do{
        printf("Enter the number : ");
        scanf("%d", &num);
        if(num<0){
            negative++;
        }else if(num==0){
            zero++;
        }else
            positive++;
        
        printf("Do you want to enter another number? y for yes & n for no : ");
        scanf(" %c", &want);
    }while(want == 'y');

    printf("No. of -ve numbers = %d\nNo. of zeros = %d\nNo of +ve numbers = %d",negative,zero,positive);

    return 0;
}