#include <stdio.h>
// ppt slide 12
void main() {
//  salary = salary
// hra = house rent allowance
// da = dearness allowance
// gs = gross salary
float salary,hra,da,gs;
printf("Enter The Salary of the Employee\n");
scanf("%f",&salary);

if (salary < 1500)
{
    da = salary * 0.90;
    hra = salary * 0.10;
    gs = salary+da+hra;
    printf("Your Gross Salary = %f\n",gs);
}
else if (salary >= 1500)
{
    da = salary * 0.98;
    hra = 500;
    gs = salary+da+hra;
    printf("Your Gross Salary = %f\n",gs);
}
}