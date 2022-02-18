#include <stdio.h>

int factorial(int num);
int factorial(int num)
{
    int i,factorial;
    for(factorial=1,i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }   
    return(factorial);
}

int main() {
 
 int number,ans;
 printf("Enter The Number\n");
 scanf("%d",&number);
 ans=factorial(number);
 printf("%d",ans);
 
}