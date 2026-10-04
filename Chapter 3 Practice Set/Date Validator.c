// Date Validator
// Write a C program that takes:
// Requirements
// Your program must correctly handle:
// - Months with 31 days
// - Months with 30 days
// - February
// - Leap years
// - Invalid month numbers
// - Invalid day numbers
#include <stdio.h>
int main ()
{
    int y,m,d;
    printf("Enter the day : ");
    scanf("%d",&d);
    printf("Enter the month : ");
    scanf("%d",&m);
    printf("Enter the year : ");
    scanf("%d",&y);
    if (m<1 || m>12)
    {
        printf("Invaild Date");
    }
    else if (d<1)
    {
        printf("Invaild Date");
    }
    else if (d>31)
    {
        printf("Invalid Date");
    }
    else if (m==2)
    {
        if (d>29)
        {
            printf("Invalid date");
        }
        else {
            if (d<=28)
            {
                printf("Valid date");
            }
            else if (d==29)
            {
                if (y%400==0 || (y%4==0 && y%100!=0))
                {
                    printf("Valid date");
                }
                else {
                    printf("Invalid Date");
                }
            }
            else {
                printf("Invalid date");
            }
        }
    }
    else if (m==4 || m==6 || m==9 || m==11)
    {
        if (d<=30)
        {
            printf("Valid Date");
        }
        else {
            printf("Invalid Date");
        }
    }
    else {
        if (d<=31)
        printf("Valid Date");
        else{
            printf("Invalid date");
        }
    }

    return 0;
}