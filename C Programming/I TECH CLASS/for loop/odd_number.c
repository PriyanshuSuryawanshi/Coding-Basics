#include <stdio.h>

void main()
{
 
    int i,num,even;
    printf("Enter The Number Of even Numbers You Want\n");
    scanf("%d",&num);
   
    for(i=1;i<=num;i++)
    {
        printf("%d\n",2*i-1);
    }
}