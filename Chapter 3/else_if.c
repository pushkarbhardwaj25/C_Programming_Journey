#include <stdio.h>
int main ()
{
    int a;
    printf("Enter your age = ");
    scanf("%d",&a);
    if (a>=18 && a>=60)
    {
        printf("You can drive and you are a senior citizen");
    }
    else if (a>=18)
    {
        printf("You can drive");
    }
    else 
    {
        printf("You can't drive");
    }
    return 0;
}