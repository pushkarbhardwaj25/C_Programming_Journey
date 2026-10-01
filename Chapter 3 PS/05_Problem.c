// Write a program to determine whether a character entered by the user is lowercase or not.
#include <stdio.h>
int main ()
{
    char a;
    printf("Enter the letter : ");
    scanf("%c",&a);
    printf("ASCII value : %d\n",a);
    if (a>=97 && a<=122)
    {
        printf("Lowercase\n");
    }
    else{
        printf("Not a Lowercase");
    }
    return 0;
}