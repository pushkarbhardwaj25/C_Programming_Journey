#include <stdio.h>
int main ()
{
    int a = 9;
    int b = 2;
    float c = a/b;
    // Output will be 4 not 4.5
    int d = 9;
    float e = 2.0;
    float f = d/e;
    // Output will be 4.5 as int & int gives int
    printf("1st ouput = %f\n",c);
    printf("2nd output = %f",f);
    return 0;
}