/*(j) In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number of 
illiterate men and women if the population of the town is 80,000.*/
#include <stdio.h>
int main(){
    int population = 80000;
    int total_men  = (52*population)/100;
    int total_women = population - total_men;
    int total_literacy = (48*population)/100;
    int men_literacy = (35*population)/100;
    int women_literacy = total_literacy-men_literacy;
    int illiterate_men = total_men-men_literacy;
    int illiterate_women = total_women-women_literacy;

    printf("Number of illiterate\nmen = %d\nwomen = %d",illiterate_men,illiterate_women);
    
    return 0;
}