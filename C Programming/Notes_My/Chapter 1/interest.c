#include<stdio.h>
int main() {

float p,n,r;
printf("Enter Principle amount\n");
scanf("%f",&p);
printf("Enter number of years\n");
scanf("%f",&n);
printf("Enter rate of interest\n");
scanf("%f",&r);

printf("Simple Interest is %f\n",(p*n*r)/100);
}
// In place of p i could have wrote principle.
// in place of n i could have written years.
// in place of r i could have wrote interest.