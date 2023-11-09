// calculating perimeter of a rectangle
#include <stdio.h>
void main()
{
    int a, b;
    float c;
    printf("Enter the height and width: ");
    scanf("%d %d", &a, &b);
    c = 2 * (a + b);
    printf("The perimeter of the rectangle is %f", c);
}