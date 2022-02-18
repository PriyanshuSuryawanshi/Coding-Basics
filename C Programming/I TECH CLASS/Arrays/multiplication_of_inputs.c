#include <stdio.h>

int main() {
 
 int a[5],i,multiplication;
 multiplication=1;

 printf("Enter The 5 Numbers Whom You Want To Multiply\n");
 for(i=0;i<5;i++)
 {
     scanf("%d",&a[i]);
 }  
        for(i=0;i<5;i++)
 {
     multiplication=multiplication*a[i];
 }
 printf("Multiplication of The Entered 5 Numbers is %d\n",multiplication);

}
