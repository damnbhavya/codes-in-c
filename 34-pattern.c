#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (j = i - 1; j > 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}