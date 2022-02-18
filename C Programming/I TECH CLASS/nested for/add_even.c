#include <stdio.h>

int main() {
 
    int i,sum;
    i=1,sum=0;
    do
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }while(i<=10);
    printf("%d",sum);
 
return 0;
}