#include <stdio.h>

int multiply(int num1,int num2);
int multiply(int num1,int num2)
{
    int ans=num1*num2;
    return(ans);
}

int main() {
int a,b;
printf("Enter Two Numbers To Be Multiplied\n");
    scanf("%d %d",&a,&b);
   int multiplication = multiply(a,b);
   printf("multiplication is %d",multiplication);
}