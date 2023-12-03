/*Write a program for a matchstick game being played between 
the computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows:

    − There are 21 matchsticks. 

    − The computer asks the player to pick 1, 2, 3, or 4 matchsticks. 

    − After the person picks, the computer does its picking. 

    − Whoever is forced to pick up the last matchstick loses the game. */

#include <stdio.h>
int main(){

    int matchsticks=21,user_choise,comp_choice;
    
    do{
        printf("Enter your choice b/w 1 - 4 : ");
        scanf("%d", &user_choise);

        if(user_choise>4 || user_choise<1){
            printf("Wrong choice\n");
        }else{
            matchsticks-=user_choise;
            comp_choice = 5-user_choise;  //trick user_choice + com_choice should = 5(1+ max no user can input)
            
            printf("Computer chose = %d\n", comp_choice);
            matchsticks-=comp_choice;
            
            printf("Matchsticks left = %d\n",matchsticks);
        }

    }while(matchsticks>1);

    printf("You lose !");

    return 0;
}