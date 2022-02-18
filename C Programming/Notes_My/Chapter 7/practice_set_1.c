#include <stdio.h>

int main() {
 
    int a[10];
    int *ptr;
    ptr = &a[0];
    printf("Address of a[0] is %d\n",ptr);
    printf("Address of a[2] is %d\n",ptr+2);
 
return 0;
}