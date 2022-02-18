#include <stdio.h>
void swap(int x,int y);
void swap(int x,int y)
{
    int p,*a,*b;

    a=&x;
    b=&y;

    p = *a;
    *a = *b;
    *b = p;
    printf("x = %d\n",x);
    printf("y = %d\n",y);
}
void main() {
 
    int p,*a,*b,x,y;

    printf("Enter two no\n");
    scanf("%d%d",&x,&y);
    swap(x,y);

}