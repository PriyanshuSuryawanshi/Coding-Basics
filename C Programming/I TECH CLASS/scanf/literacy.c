#include <stdio.h>

void main() {
 
   float total_population,total_men,total_women,literate_population,literate_men,literate_women;
   total_population = 80000;
   total_men = 80000 * 0.52;
   total_women = 80000 * 0.48;
   literate_population = 80000 * 0.48;
   literate_men = total_men * 0.35;
   literate_women = literate_population - literate_men;
   printf("There are Total %f Literate Men\n",literate_men);
   printf("There are Total %f Literate women\n",literate_women);
}