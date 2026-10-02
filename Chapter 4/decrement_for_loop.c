#include <stdio.h>
int main ()
{
    for (int a=6; a; a--){
        printf("%d\n",a); // Here 'a' in condition represents a non-zero number so the loop will continue till 'a' is a non-zero number 
    }
    return 0;
}