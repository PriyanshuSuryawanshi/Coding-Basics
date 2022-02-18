#include <stdio.h>

void main() {
 
    int p,*a,*b,x,y;

    printf("Enter two no");
    scanf("%d%d",&x,&y);

    a=&x;
    b=&y;

    p = *a;
    *a = *b;
    *b = p;
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    
}