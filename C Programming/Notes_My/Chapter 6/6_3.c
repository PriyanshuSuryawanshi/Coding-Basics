#include <stdio.h>
void tentimes(int *a);
void tentimes(int *a)
{
    printf("2.Value of i at start of function is %d\n",*a);
    printf("3.Address of i at start of function is %d\n",a);

    *a = *a*10;

    printf("4.Value of i at end of function is %d\n",*a);
}
int main() {
 
    int i,*j;
    i=5;
    j=&i;
    printf("1.Address of i in main is %d\n",j);
    tentimes(j);
    printf("5.New value of i is %d\n",i);
    printf("6.Address of i in main after function is %d\n",j);
 
return 0;
}