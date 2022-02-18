#include <stdio.h>

int main() {
 
    int a[10],num;
    printf("Enter The number whose table you want\n");
    scanf("%d",&num);
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