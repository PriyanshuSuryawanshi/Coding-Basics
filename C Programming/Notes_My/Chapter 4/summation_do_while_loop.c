#include <stdio.h>
int main() {
 
  int i,num,sum;
  sum=0;i=0;
  printf("Enter Your Number\n");
  scanf("%d",&num);
    do{
      sum+=i;
      i++;
    }while(i<=num);

  printf("Summation of %d natural numbers is %d",num,sum);
 
return 0;
}