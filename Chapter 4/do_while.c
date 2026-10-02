#include <stdio.h>
int main ()
{
    int a=0;
    do
    {
        printf("Value of a : %d\n",a);
        a++;
    } while (a<1);
// It is different from while as it will print at least one result
    int b=0;
    do {
        printf("Value of b : %d\n",b);
        b++;
    } while(b<10); // 0 1 2 3 4 5 6 7 8 9
    return 0;
}