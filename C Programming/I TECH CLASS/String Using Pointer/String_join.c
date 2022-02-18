#include<stdio.h>
void stringjoin(char*,char*);
void stringjoin(char* string1,char* string2)
{
    int i,j,count;
    for(i=0,j=0;string1[i] != '\0';i++,j++)
    {
       string1[j]=string1[i];
    }
    string1[j]=' ';
    j++;
    for(i=0;string2[i] != '\0';i++,j++)
    {
       string1[j]=string2[i];
    }
    string1[j] = '\0';
    printf("Final String is \n");
    puts(string1); 
}

int main() {

    char string1[30],string2[30];
    printf("Enter String 1\n");
    gets(string1);
    printf("Enter String 2\n");
    gets(string2);
    stringjoin(string1,string2);
    
return 0;
}