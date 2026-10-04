// Write a program to check whether a given number is prime or not using "do while" loops
#include <stdio.h>
int main ()
{
    int n;
    int d=2;
    int p=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    do 
    {
        if(n%d==0 && n!=2)
        {
            p=0;
        }
        d++;
    }while(d<n);

    if(n<=1)
    {
        printf("%d is not a prime number",n);
    }
    else 
    {
        if(p==0)
        {
            printf("%d is not a prime number",n);
        }
        else 
        {
            printf("%d is a Prime number",n);
        }
    }
    return 0;
}
// Write a program to check whether a given number is prime or not using "for" loops
#include <stdio.h>
int main ()
{
    int n;
    int p=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int d=2;d<n;d++)
    {
        if(n%d==0 && n!=2)
        {
            p=0;
        }
    }
    if(n<=1)
    {
        printf("%d is not a Prime Number",n);
    }
    else {
        if(p==0)
        {
            printf("%d is not a Prime Number",n);
        }
        else {
            printf("%d is a Prime Number",n);
        }
    }
    return 0;
}