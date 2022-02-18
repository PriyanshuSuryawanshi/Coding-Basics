#include <stdio.h>

int main() {
 
    int tth,th,h,t,u,num,reverse,afterdivision;
    printf("Enter The Number Whose Reverse Is Needed(max 5 digits)\n");
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

    reverse=tth+th*10+h*100+t*1000+u*10000;
    printf("Reverse Of Digits is %d\n",reverse);
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

    reverse=th+h*10+t*100+u*1000;
    printf("Reverse Of Digits is %d\n",reverse);
    }

    else if(num>=100)
    {
    
    h=num/100;
    afterdivision=num%100;   
  
    t=afterdivision/10;
    afterdivision=afterdivision%10;

    u=afterdivision;

    reverse=h+t*10+u*100;
    printf("Reverse Of Digits is %d\n",reverse);
    }
    else if(num>=10)
    {
  
    t=num/10;
    afterdivision=num%10;

    u=afterdivision;
    reverse=t+u*10;
    printf("Reverse Of Digits is %d\n",reverse);
    }
    else {
        u=num;
        reverse=u;
    printf("It is Same For Single Digit Numbers\nReverse Of Digits is %d\n",reverse);
    }
}