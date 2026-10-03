// Write a program to sum first "n" natural numbers using "do while" loop
#include <stdio.h>
int main ()
{
    int n;
    int a=1;
    int sum=0;
    printf("Write the number of natural numbers you want to find the sum of : ");
    scanf("%d",&n);
    do {
        sum+=a;
        a++;
    } while(a<=n);
    printf("Sum of the first %d natural numbers is = %d",n,sum);
    return 0;
}

// Write a program to sum first "n" natural numbers using "for" loop
#include <stdio.h>
int main ()
{
    int n;
    int sum=0;
    printf("Write the number of natural numbers you want to find the sum of : ");
    scanf("%d",&n);
    for(int a=1;a<=n;a++)
    {
        sum+=a;
    }
    printf("Sum of the first %d natural numbers is = %d",n,sum);
    return 0;
}