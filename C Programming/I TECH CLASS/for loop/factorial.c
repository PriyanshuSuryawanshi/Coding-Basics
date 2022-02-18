#include <stdio.h>

int main() {
 
 int i,num,factorial;
 printf("Enter The Number Whose Factorial You Want\n");
 scanf("%d",&num);

    for(factorial=1,i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }   
    printf("Factorial of %d is %d\n",num,factorial);
 
}
