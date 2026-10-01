// Write a program to find greatest of four numbers entered by the user
#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf("Enter the number \"a\" : ");
    scanf("%d",&a);
    printf("Enter the number \"b\" : ");
    scanf("%d",&b);
    printf("Enter the number \"c\" : ");
    scanf("%d",&c);
    printf("Enter the number \"d\" : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d)
    {
        printf("\"a\" is the greatest of four numbers");
    }
    else if(a<b && b>c && b>d)
    {
        printf("\"b\" is the greatest of four numbers");
    }
    else if(c>b && a<c && c>d)
    {
        printf("\"c\" is the greatest of four numbers");
    }
    else if(d>b && d>c && a<d)
    {
        printf("\"d\" is the greatest of four numbers");
    }
    return 0;
}