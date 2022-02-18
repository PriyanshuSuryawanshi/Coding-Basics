#include <stdio.h>

int main() {
 
    int rows,columns;
    printf("Enter the number of Columns You want : ");
    scanf("%d",&columns);
    printf("Enter the number of Rows You want : ");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=columns;j++)
        {
            if(i==1 || j==1 || i==rows || j==columns)
            {printf("* ");}
            else
            {printf("  ");}
        }
        printf("\n");
    }
 
return 0;
}