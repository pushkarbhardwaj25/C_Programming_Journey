#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    switch (a){
        case 1:
            printf("You entered 1");
            break;
        case 2:
            printf("You entered 2");
            break;
        case 3:
            printf("You entered 3");
            break;
        default:
            printf("Nothing matched");
            break;
    }
    return 0;
}