#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,num=0,a,line_num =1;
    scanf("%d",&n);
    a=n-1;
  	for(int i = 1;i<(2*n);i++)
    {
        num = n+1;
        for(int j = 1;j<(2*n);j++)
        {
            if(i==n+a || i==n-a)
            {
                if(j<=n-a ){num--;printf("%d ",num);}
                else if(j>n+a ){num++;printf("%d ",num);}
                else{printf("%d ",num);}
            }
            else{printf("%d ",num-1);}
        }
        printf("\n");
        line_num++;
        if (line_num<=n){a--;}
        else if (line_num>n){a++;}
    }  
    return 0;
}