#include <stdio.h>

void main()
{     
float radius,perimeter,area;
printf("Enter The Radius Of Circle\n");
scanf("%f",&radius);
area= 3.14*radius*radius; 
printf("Area of Circle with radius %f is %f\n",radius,area);
perimeter=2*3.14*radius;
printf("Perimeter of Circle with radius %f is %f",radius,perimeter);
}