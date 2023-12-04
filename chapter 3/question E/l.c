/*When interest compounds q times per year at an annual rate of 
r % for n years, the principle p compounds to an amount a as per 
the following formula 
a = p ( 1 + r / q ) nq
Write a program to read 10 sets of p, r, n & q and calculate 
the corresponding as. */
#include <stdio.h>
#include <math.h>
int main(){

    float principle,rate,q,amount;
    int year;

    for(int set=1;set<=10;set++){
        printf("Enter principle(p) for set %d : ",set);
        scanf("%f", &principle);

        printf("Enter no of years(n) for set %d : ",set);
        scanf("%d", &year);

        printf("Enter rate(r) for set %d : ", set);
        scanf("%f", &rate);

        printf("Enter q for set %d : ", set);
        scanf("%f", &q);

        amount = principle*(pow((1 + rate/q),year*q));
        printf("Amount for set %d = %.3f\n",set,amount);
    }

    return 0;
}

