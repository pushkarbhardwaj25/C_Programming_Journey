#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(a<30)
    {
        printf("%d\n",a);
        a=a+1;
    }
    return 0;
}