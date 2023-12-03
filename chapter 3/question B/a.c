/* Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not 
work for fractional part of an hour.*/
#include <stdio.h>
int main(){
    
    int working_hours,overtime_pay=0;

    for(int employee=1; employee<=10; employee++){
        printf("Enter the working hours for employee %d : ", employee);
        scanf("%d",&working_hours);

        if(working_hours>40){
            working_hours-=40;
            overtime_pay = working_hours*12;
            printf("Overtime Pay for employee %d = %d\n", employee,overtime_pay);    
        }else
            printf("No overtime Pay for employee %d\n", employee);
    }

    return 0; 
}