/*(m) If a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402. 
*/
#include <stdio.h>
int main(){
    int no,result=0,temp;
    printf("Enter number : ");
    scanf("%d",&no);

    //adding +1
    while(no>0){
        int digit = no%10;
        if(digit==9){
            digit=0;
        }else
            digit++;
        temp = temp*10+digit;
        no/=10;
    }

    //reversing
    while(temp>0){
        int digit = temp%10;
        result = result*10+digit;
        temp/=10;
    }

    printf("%d",result);
    
    return 0;
}