#include <stdio.h>
int main() {
 
    int i,num,factorial;
    printf("Enter Your Number\n");
    scanf("%d",& num);
    factorial=1;
       for(i=1;i<=num;i++){
           factorial*=i;
       }
       printf("Factorial of %d is %d\n",num,factorial);  
 
return 0;
}