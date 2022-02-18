#include <stdio.h>

void main() {
 
    int *p,a;
    a=10;
    *p = &a;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);
    printf("%d\n",a);
 
}