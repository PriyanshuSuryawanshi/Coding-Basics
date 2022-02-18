#include <stdio.h>

struct ComplexNumbers
{
    int real,imaginary;
};

int main() {
 
    struct ComplexNumbers c1;
    c1.real = 10;
    c1.imaginary = 20;
    printf("Real part = %d Imiginary Part = %d\n",c1.real,c1.imaginary);
 
return 0;
}