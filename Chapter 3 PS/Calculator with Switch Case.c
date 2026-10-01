// Calculator with Switch Case
// Requirements
// 1. Use switch to perform the operation.
// 2. Handle division by zero.
// 3. Handle modulo (%) correctly.
// 4. Print "Invalid operator" for anything other than +, -, *, /, %.
// 5. For division, make sure you understand the difference between integer division and floating-point division.
#include <stdio.h>
int main ()
{
    int p,q,r;
    char o;
    printf("Enter the 1st number : ");
    scanf("%d",&p);
    printf("Enter the operator : ");
    scanf(" %c",&o);
    printf("Enter the 2nd number : ");
    scanf("%d",&q);
    switch (o)
    {
        case '*' :
        r=p*q;
        break ;
        
        case '/' :
            if(q==0)
            {
                printf("Can't divide by zero");
            }
            else {
                r=p/q;
                printf("The result of %c between %d & %d = %d",o,p,q,r);
            }
        break;

        case '+' :
        r=p+q;
        printf("The result of %c between %d & %d = %d",o,p,q,r);
        break ;

        case '-' :
        r=p-q;
        printf("The result of %c between %d & %d = %d",o,p,q,r);
        break ;

        case '%' :
            if(q==0)
            {
                printf("Can't divide by zero");
            }
            else {
                r=p%q;
                printf("The result of %c between %d & %d = %d",o,p,q,r);
            }
        break ;

        default :
        printf("Invalid operator");
        break;
    }
    return 0;
}