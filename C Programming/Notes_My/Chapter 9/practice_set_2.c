#include <stdio.h>

struct vector
{
    int x,y;
};

struct vector sumvector(struct vector v1,struct vector v2)
{
    struct vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    return sum;
}

int main() {
 
    struct vector v1,v2,sum;
    v1.x = 5;
    v1.y = 10;
    // printf("Value of x=%d y=%d\n",v1.x,v1.y);

    v2.x = 45;
    v2.y = 17;
    // printf("Value of x=%d y=%d\n",v2.x,v2.y);

    sum = sumvector(v1,v2);
    printf("Value of x=%d y=%d\n",sum.x,sum.y);
       
return 0;
}