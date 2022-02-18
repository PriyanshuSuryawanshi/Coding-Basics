#include <stdio.h>

void main() {
 int dist;
 printf("Enter The distance between two cities in km\n");
 scanf("%d",&dist);
 printf("Thus the distance betwwen two cities is %d meters\n",dist*1000);
 printf("Thus the distance betwwen two cities is %f feet\n",dist*1000*3.28);
 printf("Thus the distance betwwen two cities is %d cm\n",dist*1000*100);
}