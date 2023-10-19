#include <stdio.h>
void main()
{
    int n, nx, f = 0, s = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fbionacchi Series: %d %d ", f, s);
    for (int i = 2; i < n; i++)
    {
        nx = f + s;
        printf("%d ", nx);
        f = s;
        s = nx;
    }
}