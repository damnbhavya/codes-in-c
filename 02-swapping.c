// WAP to swap using third varible
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    printf("\nNumbers before swapping are x=%d, y=%d.", x,y);
    z = x;
    x = y;
    y = z;
    printf("\nNumbers after swapping are x=%d, y=%d.", x,y);
}