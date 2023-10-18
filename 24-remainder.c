#include <stdio.h>
void main()
{
    int a,b;
    float q,r;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b == 0)
    {
        printf("Number cannot be divided by zero\n");
        return;
    }
    q = a/b;
    r = a%b;
    printf("Quotient: %f\n", q);
    printf("Remainder: %f", r);
}

    