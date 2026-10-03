// Write a program to sum first "n" natural numbers using "while" loop
#include <stdio.h>
int main ()
{
    int n;
    int a=1;
    int sum=0;
    printf("Write the number of natural numbers you want to find the sum of : ");
    scanf("%d",&n);
while (a<=n)
{
    // a++; this will first increment the value and then add
    // Explanation below the code
    sum +=a;
    a++; 
}
    printf("Sum of the first %d natural numbers is = %d",n,sum);
    return 0;
}
// Explanation Provided for the using the Incrementing operator after sum+=a
// sum=0
// a=1
// 1 --> 0+1 = 1
// 2 --> 1+2 = 3
// 3 --> 3+3 = 6

// sum =0
// a=1
// 1 --> 0+2 = 2
// 2 --> 2+3 = 5
// 3 --> 5+4 = 9