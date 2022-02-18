#include <stdio.h>

int main() {
 
  int i,num,even;
  printf("Enter The NUmber Of Even Numebrs You Want\n");
  scanf("%d",&num);
  i=1;
  do{
     
      printf("%d\n",2*i-1);
      i++;

  }while(i<=num);  
 

}