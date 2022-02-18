#include <stdio.h>

int main() {
 
    int i = 10;
    int *a,**b;
    a=&i;b=&a;
    printf("1.Address of a is %u\n",b);
    printf("2.Address of i is %u\n",a);
    printf("3.value of i is %u\n",**b);
 
return 0;
}