#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    float marks;
    char name[20];
};

void main() {
 
    struct student s1,s2;

    s1.id = 100;
    s2.id = 101;

    s1.marks = 50.65;
    s2.marks = 75.89;

    // s1.name[20] = "abc";
    // s2.name[20] = "xyz";
    strcpy(s1.name, "Abc");//copying string into char array    
    strcpy(s2.name, "Xyz");//copying string into char array

    printf("Id of Student 1 is : %d\n",s1.id);
    printf("Name of Student 1 is : %s\n",s1.name);
    printf("Marks obtained by Student 1 is : %f\n",s1.marks);

    printf("Id of Student 2 is : %d\n",s2.id);
    printf("Name of Student 2 is : %s\n",s2.name);
    printf("Marks obtained by Student 2 is : %f\n",s2.marks);
}