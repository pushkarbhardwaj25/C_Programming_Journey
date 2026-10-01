// Write a C program that takes the number of units consumed and calculates the bill:
// Units    -   Rate
// 0–100    -   ₹2/unit
// 101–200  -   ₹3/unit
// 201–300	-   ₹5/unit
// Above 300    -   ₹7/unit
// There is also a fixed charge of ₹50.
#include <stdio.h>
int main ()
{
    int u,r;
    printf("Enter the units consumed : ");
    scanf("%d",&u);
    if (u<0)
    {
        printf("Invalid number");
        return 0;
    }
    if (u>=0 && u<=100)
    {
        r=(2*u)+50;
    }
    else if (u<=200)
    {
        r=(3*u)+50;
    }
    else if (u<=300)
    {
        r=(5*u)+50;
    }
    else
    {
        r=(7*u)+50;
    }
    printf("Bill : %d",r);
    return 0;
}