#include <stdio.h>

int main() {
 
 int i,num;
 i=1;
 printf("Enter The Number Whose Table You Want\n");
 scanf("%d",&num);   
    do{
        printf("%d x %d = %d\n",num,i,num*i);
        i++;
    }while(i<=10);
}