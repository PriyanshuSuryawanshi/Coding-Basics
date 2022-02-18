// Sadi Sudi Method 

#include <stdio.h>
int main() {
 
    int a, b ,c ,d ;

    printf("!!!Don't repeat the Numbers!!!\n");

    printf("Enter 1st Unique Number\n");
    scanf("%d",&a);
    printf("Enter 2nd Unique Number\n");
    scanf("%d",&b);
    printf("Enter 3rd Unique Number\n");
    scanf("%d",&c);
    printf("Enter 4th Unique Number\n");
    scanf("%d",&d);
     
     if(a>b && a>c && a>d ){
         printf("1st number which is %d is the greatest number\n",a);
     }
     if(b>a && b>c && b>d ){
         printf("2nd number which is %d is the greatest number\n",b);
     }
     if(c>b && c>a && c>d ){
         printf("3rd number which is %d is the greatest number\n",c);
     }
     if(d>b && d>c && d>a ){
         printf("4th number which is %d is the greatest number\n",d);     
     }
     
 
return 0;
}