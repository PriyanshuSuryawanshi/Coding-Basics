#include <stdio.h>
struct student
{
  int age;
  float height;
};

void show_input(struct student *studentPtr);
void show_input(struct student *studentPtr)
{
  printf("Age of student is : %d\n",studentPtr->age);
  printf("Height of student is : %f\n",studentPtr->height);
}

int main() {
 
  struct student *studentPtr,s1;
  studentPtr=&s1;  

  printf("Enter Age of Student :\n");
  scanf("%d",&studentPtr->age);

  printf("Enter Height of Student :\n");
  scanf("%f",&studentPtr->height);

  show_input(studentPtr);
 
return 0;
}