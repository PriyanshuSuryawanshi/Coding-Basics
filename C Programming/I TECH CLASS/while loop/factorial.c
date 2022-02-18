#include <stdio.h>
int main()
{
    int i,num,factorial;
    printf("Enter The Number Whose Factorial You Want\n");
    scanf("%d",&num);
    i=1;
    factorial=1;
        while(i<=num){
            factorial=i*factorial;
            i++;
        }
        printf("Factorial of %d is %d",num,factorial);
}