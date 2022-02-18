#include <stdio.h>
#include <conio.h>

int main() {
 
    FILE *fp;
    char text[50];
    fp=fopen("myfile.txt","w");
    fputs("Hellooo C Programming",fp);
    fclose(fp);

    fp=fopen("myfile.txt","r");
    printf("%s",fgets(text,30,fp));
    fclose(fp);

return 0;
}