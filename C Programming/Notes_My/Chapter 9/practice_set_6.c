#include <stdio.h>

struct ComplexNumbers
{
    int real,imaginary;
};

void display(struct ComplexNumbers c1)
{
    printf("Real Part %d\n",c1.real);
    printf("Imaginary Part %d\n",c1.imaginary);
}

int main() {
 
    struct ComplexNumbers c[3];
    for(int i=0;i<3;i++)
    {
    printf("%d.Enter Real Part ",i+1);
    scanf("%d",&c[i].real);
    printf("%d.Enter Imaginary Part ",i+1);
    scanf("%d",&c[i].imaginary);
    }

    for(int i=0;i<3;i++)
    {
        display(c[i]);
    }
    
 
return 0;
}