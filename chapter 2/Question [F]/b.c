/*(b)  Any character is entered through the keyboard, write a 
program to determine whether the character entered is a 
capital letter, a small case letter, a digit or a special symbol. */
#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90){
        printf("capital letter");
    }else if(ch >= 97 && ch <= 122){
        printf("small case letter");
    }else if(ch >= 48 && ch <= 57){
        printf("digit");
    }else
        printf("special symbol");
        
    return 0;
}
