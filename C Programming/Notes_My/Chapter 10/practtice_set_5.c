#include <stdio.h>

int main() {
 
    int num;
    FILE *ptr;
    ptr=fopen("five.txt","r");
    fscanf(ptr,"%d",&num);
    ptr=fopen("five.txt","w");
    fprintf(ptr,"%d",2*num);
    printf("DONE!\n");
    fclose(ptr);
 
return 0;
}