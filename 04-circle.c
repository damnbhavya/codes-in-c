// WAP to calculate area and circumference of the circle
#include<stdio.h>
void main()
{
    float r,c,a;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    c = (2*22*r)/7;
    a = (22*r*r)/7;
    printf("\nCircumference of the circle: %f",c);
    printf("\nArea of the circle: %f",a);
}