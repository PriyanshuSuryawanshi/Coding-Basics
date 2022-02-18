#include <stdio.h>
int main() {
 
    int num;
    int i=1;
    int factorial=1;
    printf("Enter Your Number\n");
    scanf("%d",&num);
        while(i<=num){
            factorial*=i;
            i++;
        }    
        printf("Factorial of %d is %d",num,factorial);
 
return 0;
}