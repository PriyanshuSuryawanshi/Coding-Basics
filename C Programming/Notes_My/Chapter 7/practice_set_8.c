#include <stdio.h>

int main() {
 
    int a[3][10],num1,num2,num3;
    printf("Enter Number 1 : ");
    scanf("%d",&num1);
    printf("Enter Number 2 : ");
    scanf("%d",&num2);
    printf("Enter Number 3 : ");
    scanf("%d",&num3);

    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
        for(int j=0;j<10;j++)
        {
            a[i][j] = num1*(j+1);
        }
        }
        else if(i==1)
        {
        for(int j=0;j<10;j++)
        {
            a[i][j] = num2*(j+1);
        }
        }
        else if(i==2)
        {
        for(int j=0;j<10;j++)
        {
            a[i][j] = num3*(j+1);
        }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%d\n",a[i][j]);
        }
        printf("\n\n");
    }
 
return 0;
}