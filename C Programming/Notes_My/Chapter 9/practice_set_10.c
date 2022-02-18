#include <stdio.h>

typedef struct time
{
    int second;
    int minute;
    int hour;
}time;

void display(time d)
{
    printf("Second = %d\n",d.second);
    printf("Minute = %d\n",d.minute);
    printf("Hour = %d\n\n",d.hour);
}

int comparetime(time d1,time d2)
{
    if(d1.hour>d2.hour)
    return 1;
    if(d1.hour<d2.hour)
    return 2;
    if(d1.minute>d2.minute)
    return 1;
    if(d1.minute<d2.minute)
    return 2;
    if(d1.second>d2.second)
    return 1;
    if(d1.second<d2.second)
    return 2;
    
    return 0;
}

int main() {
 
    time d1;
    d1.second = 00; 
    d1.minute = 12; 
    d1.hour = 10; 

    time d2;
    d2.second = 00; 
    d2.minute = 12; 
    d2.hour = 10; 

    display(d1);
    display(d2);
    if(comparetime(d1,d2)==1)
    {
        printf("1st Time is Greater\n");
    }
    else if(comparetime(d1,d2)==2)
    {
        printf("2nd Time is Greater\n");
    }
    else
    {
        printf("Both Times are Same\n");
    }
 
return 0;
}