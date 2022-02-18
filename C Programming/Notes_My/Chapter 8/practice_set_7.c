#include <stdio.h>

int main() {
 
    char input[50];
    int i=0;
    printf("Enter The Word You Want\n");
    scanf("%s",&input);
    while(input[i]!='\0')
    {
        input[i]=input[i]-1;
        i++;
    }
    printf("The String After Decryption : %s\n",input);
 
return 0;
}