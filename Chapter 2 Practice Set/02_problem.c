// Write a program to check whether a number is divisible by 97 or not.
#include <stdio.h>
int main ()
{
    int a;
    printf("Emter the number = ");
    scanf("%d",&a);
    printf("Remainder when %d is divided by 97 : %d",a,a%97);
    // If a%97 = 0 then the number is divisible by 97 
    return 0;
}