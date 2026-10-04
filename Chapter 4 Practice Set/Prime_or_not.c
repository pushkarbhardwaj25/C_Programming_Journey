// Write a program to check whether a given number is prime or not using "while"loop
#include <stdio.h>
int main ()
{
    int n;
    int prime=1;
    int d=2;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(d<n)
    {
        if(n%d==0)
        {
            prime=0;
        }
        d++;
    }

    if (n<=1)
    {
        printf("Not a prime number");
    }
    else 
    {
        if(prime==0)
        {
            printf("Not a Prime number");
        }
        else
        {
            printf("Prime number");
        }
    }
    return 0;
}