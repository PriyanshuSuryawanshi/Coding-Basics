#include <stdio.h>

int main() {
 
    int num,i,j;
    printf("Enter The Number Of Lines Of Pattern You Want\n");
    scanf("%d",&num);
        for(i=num;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
}
