#include <stdio.h>

int main() {
 
    int i,*a;
    i=5;
    a=&i;
    printf("Address of i = %u\n",*(&a));
    printf("Address of i = %u\n",a);
    printf("Value = %u\n",*a);
    printf("Address of a = %u\n",&a);
    printf("Address of i = %u\n",&i);
 
return 0;
}