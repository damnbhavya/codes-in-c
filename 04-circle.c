// calculating area and circumference of the circle
#include <stdio.h>
void main()
{
    float r, c, a;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    // the formula (22/7)*2*r would result in wrong output
    c = (2 * 22 * r) / 7;
    // c = 3.14*2*r
    a = (22 * r * r) / 7;
    // a = 3.14*r*r
    printf("\nCircumference of the circle having radius %f is %f", r, c);
    printf("\nArea of the circle having radius %f is %f", r, a);
}