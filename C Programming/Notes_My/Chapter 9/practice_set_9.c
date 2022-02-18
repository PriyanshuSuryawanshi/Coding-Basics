#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
}date;

void display(date d)
{
    printf("Date = %d\n",d.date);
    printf("Month = %d\n",d.month);
    printf("Year = %d\n\n",d.year);
}

int comparedate(date d1,date d2)
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
    
    return 0;
}

int main() {
 
    date d1;
    d1.date = 28; 
    d1.month = 12; 
    d1.year = 2021; 

    date d2;
    d2.date = 20; 
    d2.month = 12; 
    d2.year = 2021; 

    display(d1);
    display(d2);
    if(comparedate(d1,d2)==1)
    {
        printf("1st Date is Greater\n");
    }
    else if(comparedate(d1,d2)==2)
    {
        printf("2nd Date is Greater\n");
    }
    else
    {
        printf("Both Dates are Same\n");
    }
 
return 0;
}