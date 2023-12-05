/*Write a program to produce the following output: 
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A  */
#include<stdio.h>

int main(){

    for(int i=0; i<=6; i++){
        //before G
        for(int j='A'; j<='G'-i;j++){
            printf("%c",j);
        }

        //print spaces
        for(int k=1; k<=i*2-1; k++){
            printf(" ");
        }

        //after G
        for(int l='G'-i; l>='A'; l--){
            if(l!='G'){
                printf("%c",l);
            }
        }printf("\n");
    }

    return 0;

}