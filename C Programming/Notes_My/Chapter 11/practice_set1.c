#include <stdio.h>
#include <stdlib.h>

int main() {
 
    int *ptr;
    ptr = (int*)malloc(6*sizeof(int));
    printf("Enter 6 numbers");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++)
    {
        printf("%d",ptr[i]);
    }

 
return 0;
}