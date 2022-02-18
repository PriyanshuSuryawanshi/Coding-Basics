#include <stdio.h>

int main()
{
    int num,i,j;
    printf("Enter The Number Of Lines Of Pattern You Want\n");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        for(j=i;j>=1;j--){
        printf("* ");  
        }
        printf("\n");
    }
}
