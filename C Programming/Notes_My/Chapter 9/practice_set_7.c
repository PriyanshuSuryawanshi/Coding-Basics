#include <stdio.h>

typedef struct ComplexNumbers
{
    int real,imaginary;
}comp;

int main() {
 
    comp c1;
    c1.real = 10;
    c1.imaginary = 20;
    printf("Real part = %d Imaginary Part = %d\n",c1.real,c1.imaginary);
 
return 0;
}