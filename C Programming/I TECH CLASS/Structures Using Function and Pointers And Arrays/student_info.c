#include <stdio.h>
struct student
{
  int age;
  float height;
};

void show_input(struct student *studentPtr);
void show_input(struct student *studentPtr)
{
    int i;
  for(i=0;i<2;i++,studentPtr++){
  printf("Age of student %d is : %d\n",i+1,studentPtr->age);
  printf("Height of student %d is : %f\n",i+1,studentPtr->height);
  }
}

int main() {
 
  struct student *studentPtr,s[2]; 
  int i;
   

  for(i=0;i<2;i++,studentPtr++)
  { studentPtr=&s[i];
  printf("Enter Age of Student %d :\n",i+1);
  scanf("%d",&studentPtr->age);

  printf("Enter Height of Student %d :\n",i+1);
  scanf("%f",&studentPtr->height);

  }
  studentPtr=&s[0];
  show_input(studentPtr);
 
return 0;
}