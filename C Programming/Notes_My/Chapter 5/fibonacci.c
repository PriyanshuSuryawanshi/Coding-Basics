#include <stdio.h>
int fibonacci(int number);
int main() {
    int number;
    printf("Enter number of the fibonacci element you want\n");
    scanf("%d",&number);
    printf("%dth number in Fabonacci series is %d\n",number,fibonacci(number));
return 0;
}
int fibonacci(int number){
    if(number==1)
    {
        return 0;}
    if(number==2 || number==3){
        return 1;
    }
    else{
        return fibonacci(number-1) + fibonacci(number-2); 
    }
}