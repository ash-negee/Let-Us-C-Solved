/*Write a menu driven program which has following options: 
1. Factorial of a number. 
2. Prime or not 
3. Odd or even 
4. Exit */

#include <stdio.h>
#include <stdlib.h>
int main(){

    int choice,num,temp,factorial=1,count=0;

     do{
        printf("\nEnter 1. for factorial\n");
        printf("Enter 2. to check Prime or not\n");
        printf("Enter 3. to check odd or even\n");
        printf("Enter 4. to exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        printf("\n");
   
        switch(choice){
            case 1:
                    printf("Enter the number : ");
                    scanf("%d",&num);
                    temp=num;
                    while(temp>0){
                        factorial = factorial * temp;
                        temp--;
                    }
                    printf("Factorial of %d is = %d\n",num,factorial);
                    break;

            case 2:
                    printf("Enter the number : ");
                    scanf("%d", &num);

                    for(int deno =1; deno <= num; deno++){
                        if(num%deno == 0){
                            count++;
                            if(count>2){
                                break;
                            }
                        }
                    }
                    if(count==2){
                        printf("%d is a prime number\n",num);
                    }else
                        printf("%d is not a prime number\n",num);

                    break;
            
            case 3:
                    printf("Enter the number : ");
                    scanf("%d",&num);
                    if(num%2==0){
                        printf("%d is an even number\n",num);
                    }else
                        printf("%d is an odd number\n",num);

                    break;
            
            case 4:
                    printf("Adios :)\n");
                    break;

            default:
                    printf("Enter valid input\n");
        }
    }while(choice!=4);

    return 0;
}
