#include <stdio.h>
struct employee 
{
    char name[20];
    int id;
    float salary;
};

void showinfo(struct employee e[]);
void showinfo(struct employee e[])
{
    int i;
    for(i=0;i<2;i++)
    {
    printf("Employee %d's Name is : %s\n",i,e[i].name);
    printf("Employee %d's ID is :%d\n",i,e[i].id);
    printf("Employee %d's Salary is :%f\n",i,e[i].salary);
    }
}


int main() {
 
    struct employee e[2];
    int i;

    for(i=0;i<2;i++)
    {
    printf("Enter Your Name :\n");
    scanf("%s",&e[i].name);
    printf("Enter Your ID\n");
    scanf("%d",&e[i].id);
    printf("Enter Your Salary\n");
    scanf("%f",&e[i].salary);
    }
    showinfo(e);
}