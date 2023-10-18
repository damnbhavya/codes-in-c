// swapping using third variable
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter two numbers: ");
    scanf("%d%d", &x,&y);
    printf("\nThe numbers before swapping are x = %d, y = %d.", x,y);
    z = x;
    x = y;
    y = z;
    printf("\nThe numbers after swapping are x = %d, y = %d.", x,y);
    return 0;
}
