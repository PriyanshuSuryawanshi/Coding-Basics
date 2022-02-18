#include <stdio.h>

void main() {
 
    float length,breadth;
    printf("Enter The Value of Length\n");
    scanf("%f",&length);
    printf("Enter The Value of Breadth\n");
    scanf("%f",&breadth);
        if(length*breadth>2*(length+breadth))
        {
            printf("Area Of Rectangle is greater than its Perimeter\n");
        }
        else if (length*breadth<2*(length+breadth))
        {
            printf("Area Of Rectangle is smaller than its Perimeter\n");
        }
        else if (length*breadth==2*(length+breadth))
        {
            printf("Area Of Rectangle is equal its Perimeter\n");
        }

}