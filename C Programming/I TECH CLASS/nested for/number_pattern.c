#include <stdio.h>

int main() {
 
    int num,i,j;
    printf("Enter The Number of Lines Of Pattern You Want\n");
    scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
}
