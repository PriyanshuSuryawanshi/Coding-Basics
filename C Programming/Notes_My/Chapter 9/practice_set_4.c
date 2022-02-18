#include <stdio.h>

struct vector
{
    int x,y;
};

int main() {
 
    struct vector v1;
    struct vector *ptr;
    ptr = &v1;
    v1.x = 5;
    v1.y = 10;
    printf("Value of x=%d y=%d\n",v1.x,v1.y);
    printf("Value of x=%d y=%d\n",(*ptr).x,(*ptr).y);
    printf("Using arrow operator\nValue of x=%d y=%d\n",ptr->x,ptr->y);
       
return 0;
}