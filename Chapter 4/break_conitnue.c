// #include <stdio.h>
// int main ()
// {
//     int n;
//     scanf("%d",&n);
//     for(int a=0;a<=n;a++)
//     {
//         printf("%d\n",a);
//         if(a==5)
//         {
//             break;
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<=n;a++)
    {
        if(a==5)
        {
            continue;
        }
        printf("%d\n",a);
    }
    return 0;
}
