#include <stdio.h>
void tentimes(int a);
void tentimes(int a)
{
    printf("2.Value of i at start of function is %d\n",a);

    a = a*10;

    printf("4.Value of i at end of function is %d\n",a);
}
int main() {
 
    int i;
    i=5;
    tentimes(i);
    printf("5.New value of i is %d\n",i);
 
return 0;
}