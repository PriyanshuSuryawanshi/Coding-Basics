#include <stdio.h>

int main() {
 
    int tth,th,h,t,u,num,sum,afterdivision;
    printf("Enter The 5 Number Whose Sum Of Digits Is Needed\n");
    scanf("%d",&num);
    
    if(num>=10000)
    {
    tth=num/10000;
    afterdivision=num%10000;
   // printf("tth = %d\n",tth);
   // printf("afterdivision = %d\n",afterdivision);

    
    th=afterdivision/1000;
    afterdivision=afterdivision%1000;
   // printf("th = %d\n",th);
   // printf("afterdivision = %d\n",afterdivision);

    
    h=afterdivision/100;
    afterdivision=afterdivision%100;   
   // printf("h = %d\n",h);
    //printf("afterdivision = %d\n",afterdivision);

    
    t=afterdivision/10;
    afterdivision=afterdivision%10;
    //printf("t = %d\n",t);
    //printf("afterdivision = %d\n",afterdivision);

    u=afterdivision;
    //printf("u = %d\n",u);
    //printf("afterdivision = %d\n",afterdivision);
    }
    

    sum=tth+th+h+t+u;
    printf("Sum Of Digits is %d\n",sum);

}

