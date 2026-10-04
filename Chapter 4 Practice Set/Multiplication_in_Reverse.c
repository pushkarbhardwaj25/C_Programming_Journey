// Write a program to print multiplication table in reversed order.
#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number you want to know the table in reverse of : ");
    scanf("%d",&n);
    for(int a=10;a>0;a--)
    // for(int a=10;a<=10 && a>0;a--)
    // for(int a=10;a;a--)
    {
        printf("%d x %d = %d\n",n,a,n*a);
    }
    return 0;
}