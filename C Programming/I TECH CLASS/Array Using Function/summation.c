#include <stdio.h>

void summation(int a[]);
void summation(int a[])
{ 
    int i,summation;
     summation=0;
 for(i=0;i<5;i++)
 {
     summation=summation+a[i];
 }
 printf("Summation of The Entered 5 Numbers is %d\n",summation);
}
int main() 
{
 int a[5],i;

 printf("Enter The 5 Numbers Whom You Want To Add\n");
 for(i=0;i<5;i++)
 {
     scanf("%d",&a[i]);
 }  
 summation(a);
}