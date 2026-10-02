#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a); // Let's assume input a = 23
    // a++; Post-increment
    // (Prints a first and then increments its value)

    // ++a; Pre-increment 
    // (Increments the value of a and then prints)

    // a+=2; Increment +2
    // a-- | a++ | --a | ++a (Same goes for Decrement)
    printf("Value : %d\n",a); // 23
    printf("Post-increment : %d\n",a++); // 23 
    printf("Pre-increment : %d\n",++a); // 25
    printf("Pre-decrement : %d\n",--a); // 24
    printf("Post-decrement : %d\n",a--); // 24
    printf("Post-increment : %d\n",a+=2); // 25
    a+=20;
    printf("Value : %d\n",a); // 45
    return 0;
}