#include <stdio.h>
int main() {
 
    int i,num,sum;
    sum=0;
    i=0;
    printf("Enter Your Number\n");
    scanf("%d",&num);
        while(i<=10){
            sum+=num*i;
            i++;
        }
    printf("Sum of table on %d is %d\n",num,sum);
return 0;
}