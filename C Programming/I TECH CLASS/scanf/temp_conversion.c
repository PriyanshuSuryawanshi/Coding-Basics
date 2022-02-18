#include <stdio.h>

void main() {
float fahrenheit,celcius;
printf("Enter The temperature of city in Fahrenheit\n");
scanf("%f",&fahrenheit);
celcius=(fahrenheit - 32) * 5 / 9;
printf("Temperature of city in Celcius is %f\n",celcius);
}