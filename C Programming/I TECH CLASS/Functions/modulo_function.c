#include <stdio.h>

int modulo(int num1,int num2);
int modulo(int num1,int num2)
{   
    int ans=num1%num2;
    return(ans);
}

int main() {
int a,b;
    printf("Enter Two Numbers To Get Remainder\n");
    scanf("%d %d",&a,&b);
    int moduluous=modulo(a,b);
    printf("Remainder is %d",moduluous);
}
