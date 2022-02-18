#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("table.txt","w");
    int i=1,num=5;
    while(i<=10)
    {
        fprintf(ptr,"%d x %d = %d\n ", i,num,i*num);
        i++;
    }
    printf("Done!!");
    fclose(ptr);
 
return 0;
}