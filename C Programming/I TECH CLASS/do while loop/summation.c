#include <stdio.h>
void main() {
 
    int i,num,summation;
    i=1;
    summation=0;
    printf("Enter The Number Upto Which You Want Summation\n");
    scanf("%d",&num);
        do
        {
            summation = num+summation;
            num--;
        }while(i<=num);
        printf("%d\n",summation); 
}