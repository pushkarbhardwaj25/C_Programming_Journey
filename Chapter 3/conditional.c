#include <stdio.h>

int main()
{
    int a;

    printf("Enter the age: ");
    scanf("%d", &a);

    if (a > 10)
    {
        printf("Your age is greater than 10\n");
    }

    if (a % 5 == 0)
    {
        printf("Your age is divisible by 5\n");
    }
    else
    {
        printf("Your age is %d\n", a);
    }

    return 0;
}