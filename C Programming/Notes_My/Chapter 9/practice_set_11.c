#include <stdio.h>

typedef struct timestamp
{
    int second;
    int minute;
    int hour;
    int date;
    int month;
    int year;
}timestamp;

void display(timestamp d)
{
    printf("Second = %d\n",d.second);
    printf("Minute = %d\n",d.minute);
    printf("Hour = %d\n",d.hour);
    printf("Date = %d\n",d.date);
    printf("Month = %d\n",d.month);
    printf("Year = %d\n\n",d.year);
}

int comparetimestamp(timestamp d1,timestamp d2)
{
    if(d1.year>d2.year)
    return 1;
    if(d1.year<d2.year)
    return 2;
    if(d1.month>d2.month)
    return 1;
    if(d1.month<d2.month)
    return 2;
    if(d1.date>d2.date)
    return 1;
    if(d1.date<d2.date)
    return 2;
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
 
    timestamp d1;
    d1.second = 00; 
    d1.minute = 12; 
    d1.hour = 10; 
    d1.date = 28; 
    d1.month = 12; 
    d1.year = 2021; 

    timestamp d2;
    d2.second = 00; 
    d2.minute = 12; 
    d2.hour = 10;
    d2.date = 20; 
    d2.month = 12; 
    d2.year = 2021; 

    display(d1);
    display(d2);
    if(comparetimestamp(d1,d2)==1)
    {
        printf("1st Timestamp is Greater\n");
    }
    else if(comparetimestamp(d1,d2)==2)
    {
        printf("2nd Timestamp is Greater\n");
    }
    else
    {
        printf("Both Timestamps are Same\n");
    }
 
return 0;
}