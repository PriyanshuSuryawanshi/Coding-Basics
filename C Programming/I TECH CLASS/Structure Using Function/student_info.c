#include <stdio.h>
struct student {
   char name[20];
   int age;
};

void display(struct student s);//Declaration
void display(struct student s) //Definition
{
   printf("Displaying information\n");
   printf("Name: %s\n", s.name);
   printf("Age: %d\n", s.age);
}

int main() {
   struct student s1;

   printf("Enter name: ");
   gets(s1.name);

   printf("Enter age: ");
   scanf("%d", &s1.age);

   display(s1); //call

   return 0;
}

