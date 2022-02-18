#include <stdio.h>

int main() {
 
    int i,num,summation;
    printf("Enter The Number Of even Numbers You Want\n");
    scanf("%d",&num);
    for(i=1,summation=0;i<=num;i++)
    {
        summation=i+summation;
    }
    printf("%d",summation);

 
return 0;
}