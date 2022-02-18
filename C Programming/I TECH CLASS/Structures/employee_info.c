#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    float salary;
    char name[30];
};

void main() {
 
    struct employee s1,s2;

    printf("Enter Name of 1st Employee\n");
    // gets(s1.name); --> Doesn't Work 
    scanf("%s",s1.name);
    printf("Enter ID of 1st Employee\n");
    scanf("%d",&s1.id);
    printf("Enter Salary of 1st Employee\n");
    scanf("%f",&s1.salary);

    printf("Enter Name of 2nd Employee\n");
    // gets(s2.name); --> Doesn't Work 
    scanf("%s",s2.name);
    printf("Enter ID of 2nd Employee\n");
    scanf("%d",&s2.id);
    printf("Enter Salary of 2nd Employee\n");
    scanf("%f",&s2.salary);


    printf("Id of Student 1 is : %d\n",s1.id);
    printf("Name of Student 1 is : %s\n",s1.name);
    printf("Marks obtained by Student 1 is : %f\n",s1.salary);

    printf("Id of Student 2 is : %d\n",s2.id);
    printf("Name of Student 2 is : %s\n",s2.name);
    printf("Marks obtained by Student 2 is : %f\n",s2.salary);
}