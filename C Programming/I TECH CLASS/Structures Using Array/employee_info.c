#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    float salary;
    char name[30];
};

void main() {
 
    struct employee s1[5];

    int i;

    for(i=0;i<5;i++)
    {
    printf("Enter Name of Employee %d\n",i+1);
    scanf("%s",&s1[i].name);
    printf("Enter ID of Employee %d\n",i+1);
    scanf("%d",&s1[i].id);
    printf("Enter Salary of Employee %d\n",i+1);
    scanf("%f",&s1[i].salary);
    }
        
        printf("\n\n");

    for(i=0;i<5;i++)
    {
    printf("Id of Employee %d is : %d\n",i+1,s1[i].id);
    printf("Name of Employee %d is : %s\n",i+1,s1[i].name);
    printf("Salary by Employee %d is : %f\n",i+1,s1[i].salary);
    }

}