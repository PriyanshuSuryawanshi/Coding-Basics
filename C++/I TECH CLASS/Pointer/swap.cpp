#include <iostream>
using namespace std;

int main() {

    int p,*a,*b,x,y;

    printf("Enter two no\n");
    scanf("%d%d",&x,&y);

    a=&x;
    b=&y;

    p = *a;
    *a = *b;
    *b = p;
    printf("x = %d\n",x);
    printf("y = %d\n",y);

return 0;
}