#include <iostream>
using namespace std;

int main() {

    int a[3][2],b[3][2],c[3][2],i,j;
    printf("Enter The 6 Numbers of 1st matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter The 6 Numbers of 2nd matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of 2 Martices is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",a[i][j]+b[i][j]);
        }
        printf("\n");
    }

return 0;
}