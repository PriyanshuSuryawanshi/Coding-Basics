#include <stdio.h>

void main()
{
 
    int i,num,odd;
    printf("Enter The Number Odd Numbers You Want\n");
    scanf("%d",&num);
    i = 1;
    
            while(i<=num)
        {
            odd = ((2*i)-1);
            printf("%d\n",odd);
            i++;
        }
}