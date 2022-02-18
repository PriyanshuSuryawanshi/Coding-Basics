#include <stdio.h>

int main() {
 
    int input,num,i;
    printf("Enter The Number Upto Which You Want Table\n");
    scanf("%d",&num);
        
        for(input=1;input<=num;input++)
        {
            printf("\n");
        for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d\n",input,i,input*i);
        }
        }
 
}