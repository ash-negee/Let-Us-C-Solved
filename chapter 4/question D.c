/*Write a program which to find the grace marks for a student 
using switch. The user should enter the class obtained by the 
student and the number of subjects he has failed in. 

− If the student gets first class and the number of subjects he 
failed in is greater than 3, then he does not get any grace. 
If the number of subjects he failed in is less than or equal 
to 3 then the grace is of 5 marks per subject. 

− If the student gets second class and the number of subjects 
he failed in is greater than 2, then he does not get any 
grace. If the number of subjects he failed in is less than or 
equal to 2 then the grace is of 4 marks per subject. 

− If the student gets third class and the number of subjects 
he failed in is greater than 1, then he does not get any 
grace. If the number of subjects he failed in is equal to 1 
then the grace is of 5 marks per subject */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int class,failed,grace=0;
    printf("Enter the class : ");
    scanf("%d", &class);
    printf("Enter no of failed subjects : ");
    scanf("%d", &failed);
    
    switch(class){
        case 1:
            if(failed<=3){
                grace=failed*5;
            }
            break;

        case 2:
            if(failed<=2){
                grace=failed*4;
            }
            break;

        case 3:
            if(failed==1){
                grace=5;
            }
            break;

        default:
            printf("Plese enter valid class!\n");
            exit(1);

    }

    printf("Grace marks = %d\n", grace);

    return 0;
}