#include <stdio.h>

void main() {
int a,b;
printf("Enter The Value of a\n");
scanf("%d",&a); 
printf("Enter The Value of b\n");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("The Value of a is %d\n",a);
printf("The Value of b is %d\n",b);
}
