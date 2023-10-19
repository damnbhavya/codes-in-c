// performing all arithematic operations
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("Addition: %d", a + b);
    printf("\nSubtraction: %d", a - b);
    printf("\nMultiplication: %d", a * b);
    printf("\nDivision: %d", a / b);
    printf("\nModulus: %d", a % b);
}
