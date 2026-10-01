/* Write a program to find whether a year entered by the user is a leap year or not. Take
 year as an input from the user */
#include <stdio.h>
int main ()
{
    int y;
    printf("Enter the year you want to know is leap or not : ");
    scanf("%d",&y);
    if (y%400==0|| (y%4==0 && y%100!=0))
    {
        printf("Leap Year");
    }
    else {
        printf("Not a leap year");
    }
    return 0;
}