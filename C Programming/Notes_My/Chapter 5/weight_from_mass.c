#include <stdio.h>
float force(float mass);
int main() {
 int mass;
 printf("Enter Mass of the Object\n");
 scanf("%d",&mass);   
 printf("Weight of object of mass %d kg is %.2f Newton",mass,force(mass));
//  here after % i have written .2 to get only 2 digits after decimal
// we can set it any number as per our need
return 0;
}
float force(float mass){
float result = mass*9.8;
return result;
}