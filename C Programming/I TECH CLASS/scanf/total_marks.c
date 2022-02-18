#include <stdio.h>

void main() {
int phy,chem,math,bio,geog,total;
float percentage;
printf("Enter Your Marks In Physics out of 100\n");
scanf("%d",&phy); 
printf("Enter Your Marks In Chemistry out of 100\n");
scanf("%d",&chem);
printf("Enter Your Marks In Maths out of 100\n");
scanf("%d",&math);
printf("Enter Your Marks In Biology out of 100\n");
scanf("%d",&bio);
printf("Enter Your Marks In Geography out of 100\n");
scanf("%d",&geog);
total=phy+chem+math+bio+geog;
percentage=total/5;
printf("Your Total Marks Are %d\n",total);
printf("Your Percentage is %f\n",percentage);

 

}