#include <stdio.h>
#include <string.h>

int main() {

    char c1[50],c2[50],input[50];
    int num1,num2;
    printf("Enter the Name of Employee 1 : ");
    scanf("%s",input);
    strcpy(c1,input);
    printf("Enter his Salary : ");
    scanf("%d",&num1);

    printf("Enter the Name of Employee 2 : ");
    scanf("%s",input);
    strcpy(c2,input);
    printf("Enter his Salary : ");
    scanf("%d",&num2);

    FILE *ptr;
    ptr = fopen("fourth.txt","w");

    char a=fgetc(ptr);

    fputs(c1,ptr);
    fprintf(ptr,", %d\n",num1);
    fputs(c2,ptr);
    fprintf(ptr,", %d\n",num2);
    printf("DONE!\n");
    close(ptr);
 
return 0;
}