/* Write a program to produce the following output: 
        1 
     2     3 
   4    5    6 
7    8     9   10 */
#include <stdio.h>
int main(){
    
    int num =1;
    for(int i=1;i<=4;i++){       // to iterate rows
        for(int j=1;j<=4;j++){   // to iteraate columns
            if(j <= 4-i){        // 4 is no of rows
                printf(" ");
            }else{
                printf("%d ",num);
                num++;
            }
        }printf("\n");
    }

    return 0;
}
