#include <stdio.h>

void main() {
int a,b,c;
printf("Enter The Value of a\n");
scanf("%d",&a); 
printf("Enter The Value of b\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("The Value of a is %d\n",a);
printf("The Value of b is %d\n",b);
}
