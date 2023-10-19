#include <stdio.h>
void main()
{
    int a, b;
    char c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operator(+,-,*,/): ");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
    default:
        printf("Invalid input!");
    }
}