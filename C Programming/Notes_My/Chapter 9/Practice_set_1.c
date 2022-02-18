#include <stdio.h>

struct vector
{
    int x,y;
};

int main() {
 
    struct vector v1;
    v1.x = 5;
    v1.y = 10;
    printf("Value of x=%d y=%d\n",v1.x,v1.y);
       
return 0;
}