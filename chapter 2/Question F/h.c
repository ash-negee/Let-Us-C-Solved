/*In a company, worker efficiency is determined on the basis of 
the time required for a worker to complete a particular job. If 
the time taken by the worker is between 2 – 3 hours, then the 
worker is said to be highly efficient. If the time required by 
the worker is between 3 – 4 hours, then the worker is ordered 
to improve speed. If the time taken is between 4 – 5 hours, the 
worker is given training to improve his speed, and if the time 
taken by the worker is more than 5 hours, then the worker has 
to leave the company. If the time taken by the worker is input 
through the keyboard, find the efficiency of the worker*/
#include <stdio.h>
int main(){

    int time;
    printf("Enter the time taken : ");
    scanf("%d",&time);

    if(time >= 2 && time <3){
        printf("Highly efficient");
    }else if(time >= 3 && time <4){
        printf("Need to improve speed");
    }else if(time >= 4 && time < 5){
        printf("Training is given");
    }else if(time >= 5){
        printf("Worker has to leave the company");
    }
        
    return 0;
}