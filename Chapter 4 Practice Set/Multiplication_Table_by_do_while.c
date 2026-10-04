// Reverse Multiplication table using 'while' loop
#include <stdio.h>
int main ()
{
    int n;
    int a=10;
    printf("Enter the number you want to know the table of : ");
    scanf("%d",&n);
    while (a)
    {
        printf("%d x %d = %d\n",n,a,n*a);
        a--;
    }
    
    return 0;
} 

// Multiplication table using "do while" loop
#include <stdio.h>
int main ()
{
    int n;
    int a=1;
    printf("Enter the number you want to know the table of : ");
    scanf("%d",&n);
    do{
        printf("%d x %d = %d\n",n,a,n*a);
        a++;
    }while(a<=10);
    return 0;
}