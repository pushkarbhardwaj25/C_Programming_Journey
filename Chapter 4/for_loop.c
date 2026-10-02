// Write a program to print first 'n' natural numbers using 'for' loop.
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for (int a=1;a<=n;a++)  {
        printf("%d\n",a);
    }
    return 0;
}