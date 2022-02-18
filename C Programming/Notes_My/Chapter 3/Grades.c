#include <stdio.h>
int main() {
    
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);

      if(marks>=90 && marks<=100){
      printf("Your Grade is A,Congratulations!!!\n");
      }

    if(marks>=80 && marks<90){
      printf("Your Grade is B\n");
      }

    if(marks>=70 && marks<80){
      printf("Your Grade is C\n");
      }

    if(marks>=60 && marks<70){
      printf("Your Grade is D\n");
      }

     if(marks<60){
      printf("Your Grade is F,You have failed!\n");
      } 

return 0;
}