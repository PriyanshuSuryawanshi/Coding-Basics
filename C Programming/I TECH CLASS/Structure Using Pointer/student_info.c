#include <stdio.h>
struct student
{
    int age;
    float height;
};

int main() {
 
  struct student *studentPtr,s1;
  studentPtr=&s1;  

  printf("Enter Age of Student :\n");
  scanf("%d",&studentPtr->age);

  printf("Enter Height of Student :\n");
  scanf("%f",&studentPtr->height);

  printf("Age of student is : %d\n",studentPtr->age);
  printf("Height of student is : %f\n",studentPtr->height);
 
return 0;
}