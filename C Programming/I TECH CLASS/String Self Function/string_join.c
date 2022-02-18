
#include<stdio.h>
#include<string.h>
int main() {

    char string1[30],string2[30],string3[60];
    printf("Enter String 1\n");
    gets(string1);
    printf("Enter String 2\n");
    gets(string2);
    int i,j,count;
    for(i=0,j=0;string1[i] != '\0';i++,j++)
    {
       string3[j]=string1[i];
    }
    string3[j]=' ';
    j++;
    for(i=0;string2[i] != '\0';i++,j++)
    {
       string3[j]=string2[i];
    }
    string3[j] = '\0';
    printf("Final String is \n");
    puts(string3); 
return 0;
}