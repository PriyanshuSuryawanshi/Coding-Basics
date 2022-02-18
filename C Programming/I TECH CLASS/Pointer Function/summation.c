#include <stdio.h>
void addall(int *a);
void addall(int *a)
{
    int i,summation;
    summation=0;
     for(i=0;i<5;i++)
 {
     summation=summation+a[i];
 }
 printf("Summation of The Entered 5 Numbers is %d\n",summation);
}

int main() {
 
 int a[5],i;

 printf("Enter The 5 Numbers Whose Summation You Want\n");
 for(i=0;i<5;i++)
 {
     scanf("%d",&a[i]);
 }  
    addall(a);
}