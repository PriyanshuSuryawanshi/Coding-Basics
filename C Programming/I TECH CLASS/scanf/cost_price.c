#include <stdio.h>

void main() {
 
 float tsp,tp,tcp,scp;
 printf("Enter The Selling Price of 15 items\n");
 scanf("%f",&tsp);
 printf("Enter The Total Profit of 15 items\n");
 scanf("%f",&tp);
 tcp = tsp - tp;
 scp = tcp/15; 
 printf("The total Cost Price of single item is %f Rs\n",scp);
}