#include <stdio.h>

int main() {
 
    int a[10],num=5;
    for(int i=0;i<10;i++)
    {
        a[i] = (i+1)*num;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }

 
return 0;
}