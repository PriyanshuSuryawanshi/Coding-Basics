#include <stdio.h>

void main() {
    // x2-x1/y2-y1 = x3-x2/y3-y2
    float xa,ya,xb,yb,xc,yc;
    // xa=x1,ya=y1c
    // xb=x2,yb=y2;
    // xc=x3,yc=y3;

    printf("Enter The Value Of x1 and y1\n");
    scanf("%f %f",&xa,&ya);
    printf("Enter The Value Of x2 and y2\n");
    scanf("%f %f",&xb,&yb);
    printf("Enter The Value Of x3 and y3\n");
    scanf("%f %f",&xc,&yc);
    // printf("%f %f %f %f %f %f\n",xa,ya,xb,yb,xc,yc);

    if((xb-xa)/(yb-ya)==(xc-xb)/(yc-yb))
    {
        printf("Yes The Given 3 Points are in one straight line\n");
    }
    else
    {
        printf("No The Given 3 Points are not in one straight line\n");
    }
    
}
