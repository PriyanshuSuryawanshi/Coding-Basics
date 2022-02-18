#include <stdio.h>

void main() {
 
 float ti,tsp,tp,tcp,scp;
 printf("Enter The Number of items\n");
 scanf("%f",&ti);
 printf("Enter The Selling Price of %f items\n",ti);
 scanf("%f",&tsp);
 printf("Enter The Total Profit of %f items\n",ti);
 scanf("%f",&tp);
 tcp = tsp - tp;
 scp = tcp/ti; 
 printf("The total Cost Price of single item is %f Rs\n",scp);
}