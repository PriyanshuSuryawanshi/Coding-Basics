#include <stdio.h>

void main() {
 int num,sum;
sum=0;
printf("Enter The Number You Want To Add\n");

do{
    scanf("%d",&num);
    sum=num+sum;
    printf("%d is sum till now\n",sum);
}while(num!=0);

}
