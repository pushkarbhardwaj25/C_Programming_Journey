#include <stdio.h>
int main ()
{
    int m = 10;
    float n = 2.4;
    int p;
    p= (int) n; // p will now be considered as integer value of n
    printf("m = %d\n",m); // output = 10
    printf("n = %f\n",n); // output = 2.4
    printf("p = %d",p); // output = 2
    return 0;
}