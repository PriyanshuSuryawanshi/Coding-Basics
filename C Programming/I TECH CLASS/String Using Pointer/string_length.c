#include<stdio.h>
void stringlength(char*);
void stringlength(char* string)
{
    int i,count;
    count=0;
    for(i=0;string[i]!='\0';i++)
    {
       if(string[i]!=' ')
        {
            count++;
        }
    }
    printf("Number of characters = %d\n",count);
}
int main() {

    char string[20];
    printf("Enter String\n");
    gets(string);
    stringlength(string);
return 0;
}