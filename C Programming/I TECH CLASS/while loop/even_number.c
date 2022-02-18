#include <stdio.h>

void main()
{
 
    int i,num,even;
    printf("Enter The Number Of even Numbers You Want\n");
    scanf("%d",&num);
    i = 1;
    
            while(i<=num)
        {
            even = (2*i);
            printf("%d\n",even);
            i++;
        }
}