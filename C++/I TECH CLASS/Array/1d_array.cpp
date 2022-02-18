#include <iostream>
using namespace std;

int main() {

    int a[5],b[5],c[10],num;
    printf("Enter 5 Numbers For Array 1\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num);
        a[i]=num;
    }
    printf("Enter 5 Numbers For Array 2\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num);
        b[i]=num;
    }
    printf("Start\n");
    for(int i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<5;i++)
    {
        c[i+5]=b[i];
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",c[i]);
    }

return 0;
}