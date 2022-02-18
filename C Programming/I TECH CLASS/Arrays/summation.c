#include <stdio.h>

int main() {
 
 int a[5],i,summation;
 summation=0;

 printf("Enter The 5 Numbers Whose Summation You Want\n");
 for(i=0;i<5;i++)
 {
     scanf("%d",&a[i]);
 }  
 for(i=0;i<5;i++)
 {
     summation=summation+a[i];
 }
 printf("Summation of The Entered 5 Numbers is %d\n",summation);

}
