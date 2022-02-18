#include <stdio.h>
int main() {
 
    int i=1;
    int num;
    int factorial=1;
    printf("Enter Your Number\n");
    scanf("%d",&num);
       do{
           factorial*=i;
           i++;
       }while(i<=num);
       printf("Factorial of %d is %d\n",num,factorial);
 
return 0;
}