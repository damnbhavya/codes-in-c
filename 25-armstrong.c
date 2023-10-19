#include <stdio.h>
void main()
{
    int n, r, t, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        r = n % 10;
        s = s + (r * r * r);
        n = n / 10;
    }
    if (s == t)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }
}