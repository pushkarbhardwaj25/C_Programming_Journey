// Write a program to calculate the factorial of a given number using a while loop
// In this I used decrement operator
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int f=1;
    int a=n;
    while(a)
    {
        f*=a;
        a--;
    }
    printf("Factorial of %d = %d",n,f);
    return 0;
}