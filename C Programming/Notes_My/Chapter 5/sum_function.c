#include <stdio.h>
int sum(int a,int b);//function prototype decleration
int a;
int b;

int main() {
int addition;
addition = sum(a,b);//function call
printf("Value of sum is %d\n",addition);

return 0;
}

int sum(int a,int b){
    printf("Enter your first number\n");
    scanf("%d",&a);
    printf("Enter your second number\n");
    scanf("%d",&b);
    int addition = a + b;
    return addition;//programm worked even without this,dk y.
    }