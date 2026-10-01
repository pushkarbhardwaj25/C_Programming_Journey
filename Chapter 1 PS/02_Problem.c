#include <stdio.h>
int main ()
{
    float r,h,pi;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);
    printf("Enter the height of the cylinder : ");
    scanf("%f",&h);
    pi=3.14;
    printf("Volume of the cylinder with height %.2f and radius %.2f is : %.2f\n",h,r,pi*r*r*h);
    printf("Area of the circle is : %.2f",pi*r*r);
    return 0;
}