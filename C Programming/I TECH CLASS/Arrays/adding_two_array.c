#include <stdio.h>

int main() {
 
    int a[5],b[5],num;
    printf("Enter 10 Numbers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num);
        a[i]=num;
    }
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num);
        b[i]=num;
    }
    printf("Start\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
 
}
