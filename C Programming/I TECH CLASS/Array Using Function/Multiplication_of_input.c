#include <stdio.h>

void multiplicationn(int a[]);
void multiplicationn(int a[])
{ 
    int i,multiplication;
     multiplication=1;
 for(i=0;i<5;i++)
 {
     multiplication=multiplication*a[i];
 }
 printf("Multiplication of The Entered 5 Numbers is %d\n",multiplication);
}
int main() 
{
 int a[5],i;

 printf("Enter The 5 Numbers Whom You Want To Multiply\n");
 for(i=0;i<5;i++)
 {
     scanf("%d",&a[i]);
 }  
 multiplicationn(a);
}