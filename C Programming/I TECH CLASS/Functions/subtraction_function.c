#include <stdio.h>

int subtract(int num1,int num2);//Declaration
int subtract(int num1,int num2)
{
   int ans=num1-num2;
   return(ans);
}//Definition

int main() {
    int a,b;
    printf("Enter Two Numbers To Be Subtracted\n");
    scanf("%d %d",&a,&b);
    int subtraction=subtract(a,b);//Call
    printf("%d",subtraction);
}
