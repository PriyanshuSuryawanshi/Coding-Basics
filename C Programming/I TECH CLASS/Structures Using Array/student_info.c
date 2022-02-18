#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    float percentage;
    char name[30];
};

void main() {
 
    struct student s1[5];

    int i;

    for(i=0;i<5;i++)
    {
    printf("Enter Name of Student %d\n",i+1);
    scanf("%s",&s1[i].name);
    printf("Enter ID of Student %d\n",i+1);
    scanf("%d",&s1[i].id);
    printf("Enter Percentage of Student %d\n",i+1);
    scanf("%f",&s1[i].percentage);
    }
        
        printf("\n\n");

    for(i=0;i<5;i++)
    {
    printf("Name of Student %d is : %s\n",i+1,s1[i].name);
    printf("Id of Student %d is : %d\n",i+1,s1[i].id);
    printf("Percentage obtained by Student %d is : %f\n",i+1,s1[i].percentage);
    }

}