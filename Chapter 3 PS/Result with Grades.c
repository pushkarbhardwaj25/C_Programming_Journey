// Take marks of Physics, Chemistry and Mathematics, each out of 100.
// Your program should:
// 1. Calculate the percentage.
// 2. Determine whether the student passes:
//    - Each subject ≥ 33
//    - Overall percentage ≥ 40
// 3. If the student passes, assign:
//    > 90 - 100 → A
//    > 75 – 89 → B
//    > 60 – 74 → C
//    > 40 – 59 → D
// 4. Otherwise print Fail.
// Extra challenge: Also print the subject in which the student scored the lowest marks.
#include <stdio.h>
int main ()
{
    float p,c,m,t;
    printf("Enter the marks in Physics : ");
    scanf("%f",&p);
    printf("Enter the marks in Chemistry : ");
    scanf("%f",&c);
    printf("Enter the marks in Maths : ");
    scanf("%f",&m);
    t=(p+c+m)/3;
    printf("Your overall percentage is : %.2f\n",t);
    if (t>=40 && p>=33 && c>=33 && m>=33)
    {
        if (t>=90)
        {
            printf("A\n");
        }
        else if (t>=75 && t<=89)
        {
            printf("B\n");
        }
        else if (t>=60 && t<=74)
        {
            printf("C\n");
        }
        else if (t>=40 && t<=59)
        {
            printf("D\n");
        }
    }
    else {
        printf("Fail\n");
    }

    if (p<c && p<m)
    {
        printf("Lowest Marks scored in Physics i.e. %f\n",p);
    }
    else if (c<p && c<m)
    {
        printf("Lowest Marks scored in Chemistry i.e. %f\n",c);
    }
    else if (m<p && m<c)
    {
        printf("Lowest Marks scored in Maths i.e. %f\n",m);
    }
    else {
        printf("Lowest Marks are equal in any 2 or 3 subjects\n");
    }
    return 0;
}