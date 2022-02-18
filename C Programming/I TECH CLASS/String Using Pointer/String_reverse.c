#include<stdio.h>
int stringlength(char string[20]);
int stringlength(char string[20])
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
   return(count);
}
void stringreverse(char*);
void stringreverse(char* string)
{
    int size;
    size = stringlength(string);
    printf("Value of size = %d\n",size);
    int i;
    if(size%2!=0)
    {
        for(i=0;i<=size/2;i++)
        {
        char temp;
        temp=string[i];
        string[i]=string[size-i-1]; 
        string[size-i-1]=temp;
        }
        printf("String after reversing is %s\n",string);
    }
    else if(size%2==0)
    {
        for(i=0;i<=size/2-1;i++)
        {
        char temp;
        temp=string[i];
        string[i]=string[size-i-1]; 
        string[size-i-1]=temp;
        }
        printf("String after reversing is %s\n",string);
    }
}

int main() {

    char string[30];
    printf("Enter The String \n");
    gets(string);
    stringreverse(string);
    
return 0;
}