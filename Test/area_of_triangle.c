#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
 
    int a,b,c;
    printf("enter sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    float p,area;
    p = ((float)a+(float)b+(float)c)/2;
    area = p*(p-a)*(p-b)-(p-c);//we have not taken sq root
    printf("%d %d %d %f %f",a,b,c,p,area);
 
return 0;
}