#include <stdio.h>

int main() {
 
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("3rd.txt","r");
    ptr2 = fopen("third.txt","w");
    char a=fgetc(ptr1);
    for(;a!=EOF;)
    {
    fputc(a,ptr2);
    fputc(a,ptr2);
    a=fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    printf("Done!!"); 
return 0;
}