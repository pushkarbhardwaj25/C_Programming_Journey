// Write a program to print multiplication table of a given number n
#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number you want to know the table of : ");
    scanf("%d",&n);
    for(int a=0;a<=10;a++)
    {
        printf("%d x %d = %d\n",n,a,n*a);
    }
    return 0;
}