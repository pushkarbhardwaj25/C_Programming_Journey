#include <stdio.h>

int main()
{
    int a, b;
    int prime_count = 0;

    printf("Enter the starting number: ");
    scanf("%d", &a);

    printf("Enter the ending number: ");
    scanf("%d", &b);

    for (int n = a; n <= b; n++)
    {
        int prime = 1;

        if (n <= 1)
        {
            prime = 0;
        }
        else
        {
            for (int d = 2; d < n; d++)
            {
                if (n % d == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime == 1)
        {
            printf("%d ", n);
            prime_count++;
        }
    }

    printf("\nTotal prime numbers = %d", prime_count);

    return 0;
}