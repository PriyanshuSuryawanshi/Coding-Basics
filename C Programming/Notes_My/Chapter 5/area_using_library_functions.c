#include <stdio.h>
#include <math.h>
int main() {
 
    float side,area;
    printf("Enter the value of side of the square\n");
    scanf("%f",&side);
    printf("Area of the square having side %f is %f\n",side,pow(side,2));
 
return 0;
}
// pow(a,b) means a raise to b