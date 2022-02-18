#include <stdio.h>

int main() {
 
    int rows,columns;
    printf("Enter the number of Columns You want : ");
    scanf("%d",&columns);
    printf("Enter the number of Rows You want : ");
    scanf("%d",&rows);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
 
return 0;
}