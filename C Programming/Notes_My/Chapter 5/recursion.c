#include <stdio.h>
int factorial(int x);
int factorial(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}

int main() {
 
int a;
printf("Enter the number whose factorial you want to find\n");
scanf("%d",&a);
printf("The factorial of %d is %d\n",a,factorial(a));    
 
return 0;
}
