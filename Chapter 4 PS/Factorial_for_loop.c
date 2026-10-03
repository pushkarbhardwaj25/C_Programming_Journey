// Write a program to calculate the factorial of a given number using a for loop
// In this I used increment operator
#include <stdio.h>
int main ()
{
    int n;
    int f=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int a=1; a<=n; a++)
    {
        f*=a; //f=f*a;
    }
    printf("Factorial of %d = %d",n,f);
    return 0;
}
// Explanation
// f=f*a ; n=5
// 1*1=1
// 1*2=2
// 2*3=6
// 6*4=24
// 24*5=120