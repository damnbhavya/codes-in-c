#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a >= 1)
    {
        printf("\nNumber is positive.");
    }
    else if (a == 0)
    {
        printf("\nNumber is zero.");
    }
    else
    {
        printf("\nNumber is negative.");
    }
}
