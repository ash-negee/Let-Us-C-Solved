/*Write a program to produce the following output: 
            1
        1       1
     1      2       1
   1    3       3       1
 1   4      6       4      1

*/
#include <stdio.h>
int main() {
   int coef = 1;

   for (int i = 0; i < 5; i++) {
      for (int s = 1; s <= 5 - i; s++)
         printf("  ");
      for (int j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}


