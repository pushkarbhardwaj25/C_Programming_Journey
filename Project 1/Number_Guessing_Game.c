#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, m, random;
    int no_of_guesses = 0;
    int guessed;
    printf("Enter the starting number : ");
    scanf("%d", &n);
    printf("Enter the ending number : ");
    scanf("%d", &m);
    srand(time(0));
    random = n + rand() % (m - n + 1);
    do {
        printf("Enter the guessed number : ");
        scanf("%d", &guessed);
        no_of_guesses++;
        if(guessed<random)
        {
            printf("Higher number please !\n");
        }
        else if(guessed>random)
        {
            printf("Lower number please !\n");
        }
    }while(guessed!=random);
        
    printf("Number of guesses : %d",no_of_guesses);
    return 0;
}