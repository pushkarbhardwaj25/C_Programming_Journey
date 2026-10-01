#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    c=a+b;
    printf("Sum of the two numbers is = %d",c);
    return 0;
}
// c = a*b (Valid)
// a*b = c (Invalid)
// c = ab (Invalid)
// c = a^b (Invalid) {Exponentiation is done by math.h}