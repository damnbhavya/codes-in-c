#include <stdio.h>
void main()
{
    int no, remainder, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    while (no > 0)
    {
        remainder = no % 10;
        reverse = reverse * 10 + remainder;
        no = no / 10;
    }
    printf("Reversed number: %d", reverse);
}

