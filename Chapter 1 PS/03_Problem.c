#include <stdio.h>
int main ()
{
    float c,f;
    printf("Enter the temperature in celsius : ");
    scanf("%f",&c);
    f= ((9.0/5.0)*c)+32;
    printf("Your temperature in Fahrenheit is : %.2f",f);
    return 0;
}