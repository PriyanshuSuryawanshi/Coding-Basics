#include <stdio.h>

int main() {
 
    int num[5];
    printf("Enter 5 digits\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }    

    for(int count=0;count<5;count++)
    {
        for(int i = 1;i<5-count;i++)
        {
            if(num[count]>num[i+count])
            {
                int temp;
                temp = num[count];
                num[count] = num[i+count];
                num[i+count] = temp;
            }
        }
    }

     printf("Ordered digits\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",num[i]);
    } 
return 0;
}