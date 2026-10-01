// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there are
// three subjects and take the marks as input from the user.
#include <stdio.h>
int main ()
{
    float a,p,c,m;
    printf("Enter the marks in Physics : ");
    scanf("%f",&p);
    printf("Enter the marks in Chemistry : ");
    scanf("%f",&c);
    printf("Enter the marks in Maths : ");
    scanf("%f",&m);
    a = ((p+c+m)/300)*100;
    if (a>=40 && p>=33 && c>=33 && m>=33)
    {
        printf("Passed");
    }
    else {
        printf("Failed");
    }
    return 0;
}