#include <stdio.h>
#include<stdlib.h> 

int main() {
 
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    ptr = realloc(ptr,10*sizeof(int));
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",ptr[i]);
    }
 
return 0;
}