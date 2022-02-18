#include <stdio.h>

void main()
{
 
    int i,num;
    printf("Enter The Number Whose Table You Want\n");
    scanf("%d",&num);
    i = 1;
        while(i<=10)
        {
            printf("%d x %d = %d\n",num,i,num*i);
            i++;
        }
}
