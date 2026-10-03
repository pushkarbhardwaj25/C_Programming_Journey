// Write a program to calculate the sum of the numbers occurring in the multiplication
// table of any number 'n'
#include <stdio.h>
int main ()
{
    int n;
    int a=1;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(a<=10)
    {
        sum+=(n*a);
        a++;
    }
    printf("Sum of the first 10 multiples of %d is : %d",n,sum);
    return 0;
}
