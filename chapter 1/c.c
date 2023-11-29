/*(c) If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100*/
#include <stdio.h>
int main(){
    int marks,agg=0;float percentage;
    
    for(int i=1;i<=5;i++){
        printf("Enter marks for sunject %d : ",i);
        scanf("%d",&marks);
        agg += marks;
    }percentage = agg/5;
    
    printf("Aggregate marks = %d\nPercentage = %.2f",agg,percentage);

    return 0;
}