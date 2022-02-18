#include <stdio.h>

int main() {
 
    int tth,th,h,t,u,num,sum,afterdivision;
    printf("Enter The Number Whose Sum Of Digits Is Needed (max 5 digits)\n");
    scanf("%d",&num);
    tth=th=h=t=u=0;
    if(num>=10000)
    {
    tth=num/10000;
    afterdivision=num%10000;
  
    th=afterdivision/1000;
    afterdivision=afterdivision%1000;
    
    h=afterdivision/100;
    afterdivision=afterdivision%100;   
  
    t=afterdivision/10;
    afterdivision=afterdivision%10;

    u=afterdivision;
    }
    else if(num>=1000)
    {
  
    th=num/1000;
    afterdivision=num%1000;
    
    h=afterdivision/100;
    afterdivision=afterdivision%100;   
  
    t=afterdivision/10;
    afterdivision=afterdivision%10;

    u=afterdivision;
    }
    else if(num>=100)
    {
    
    h=num/100;
    afterdivision=num%100;   
  
    t=afterdivision/10;
    afterdivision=afterdivision%10;

    u=afterdivision;
    }
    else if(num>=10)
    {
  
    t=num/10;
    afterdivision=num%10;

    u=afterdivision;
    }
    else {
        u=num;
    }

    

    sum=tth+th+h+t+u;
    printf("Sum Of Digits is %d\n",sum);

}