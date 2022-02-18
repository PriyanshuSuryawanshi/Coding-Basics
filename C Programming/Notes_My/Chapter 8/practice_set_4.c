#include <stdio.h>

int main() {
 
    char input[50];
    int num1,num2,i=0;
    printf("Enter The Word You Want\n");
    scanf("%s",&input);
    printf("Enter the Start of Slice\n");
    scanf("%d",&num1);
    printf("Enter the end of Slice\n");
    scanf("%d",&num2);
    while(i+num1<num2)
    {
        input[i]=input[i+num1];
        i++;
    }
    input[i]='\0';
    printf("The String After Slicing : %s\n",input);

 
return 0;
}