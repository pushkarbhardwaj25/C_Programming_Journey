// For any positive number (Finding the Krishnamurthy Number)
//#include <stdio.h>

// int main()
// {
//     int n, original, digit;
//     int sum = 0;

//     printf("Enter the number : ");
//     scanf("%d", &n);

//     original = n;

//     while (n > 0)
//     {
//         digit = n % 10;

//         int f = 1;

//         for (int i = 1; i <= digit; i++)
//         {
//             f = f * i;
//         }

//         sum = sum + f;

//         n = n / 10;
//     }

//     if (sum == original)
//     {
//         printf("%d is a Strong number.", original);
//     }
//     else
//     {
//         printf("%d is not a Strong number.", original);
//     }

//     return 0;
// }/ 

// For 3-digit number
#include <stdio.h>
int main ()
{
    int n,a,b,c;
    int f1=1;
    int f2=1;
    int f3=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=(n/100)%10; //hundreds
    b=(n/10)%10; // tens
    c=n%10; // units
    for(int x=1;x<=a;x++)
    {
        f1=f1*x;
    }
    for (int y=1;y<=b;y++)
    {
        f2=f2*y;
    }
    for (int z=1;z<=c;z++)
    {
        f3=f3*z;
    }
    int f=f1+f2+f3;
    if(f==n)
    {
        printf("%d is a Strong number.",n);
    }
    else{
        printf("%d is not a Strong number.",n);
    }
    return 0;
}