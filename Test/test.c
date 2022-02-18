#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,num=0;
    scanf("%d", &n);
  	for(int i = 1;i<(2*n);i++)
    {
        num = n+1;
        for(int j = 1;j<(2*n);j++)
        {
            if(i==n)
            {
                if(j<=n ){num--;printf("%d",num);}
                else if(j>n ){num++;printf("%d",num);}
                else{printf("%d",num);}
            }
            else if(i==n+1 || i==n-1)
            {
                if(j<=n-1 ){num--;printf("%d",num);}
                else if(j>n+1 ){num++;printf("%d",num);}
                else{printf("%d",num);}
            }
            else if(i==n+2 || i==n-2)
            {
                if(j<=n-2 ){num--;printf("%d",num);}
                else if(j>n+2 ){num++;printf("%d",num);}
                else{printf("%d",num);}
            }
            else if(i==n+3 || i==n-3)
            {
                if(j<=n-3 ){num--;printf("%d",num);}
                else if(j>n+3 ){num++;printf("%d",num);}
                else{printf("%d",num);}
            }
            else{printf("%d",num-1);}
        }
        printf("\n");
    }  
    return 0;
}