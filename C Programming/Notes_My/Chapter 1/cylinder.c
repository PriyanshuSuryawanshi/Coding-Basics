#include <stdio.h>
int main(){
    int r,h;
    float p=3.14;
    printf("Enter the Radius of cylinder\n");
    scanf("%d",&r);
    printf("Enter The Height of Cylinder\n");
    scanf("%d",&h);
    printf("Volume of cylinder is %f\n",p*r*r*h);
    return 0;
} 
// i could have written radius in place of r & height in place of h & pi in place of p.
// similarly in p*r*r*h i could have written pi*radius*radius*height
// Also i forgot to add \n , but i added it later.