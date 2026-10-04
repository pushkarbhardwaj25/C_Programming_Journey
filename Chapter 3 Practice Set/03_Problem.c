// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
// Income Slab Tax
// 2.5 - 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.
#include <stdio.h>
int main ()
{
    float a,t;
    printf("Enter your income (in lakhs) : ");
    scanf("%f",&a);
    if (a<2.5)
    {
        t=0;
    }
    else if (a<=5)
    {
        t=a*0.05;
    }
    else if (a<=10)
    {
        t=a*0.2;
    }
    else 
    {
        t=a*0.3;
    }
    printf("Tax to be given is %.2f",t);
    return 0;

}
