#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the value of \"a\" : ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of \"b\" : ");
    scanf("%d",&b);
    (a>b)?printf("\"a\" is greater than \"b\""):printf("\"b\" is greater than or equal to \"a\"");
    return 0;
}