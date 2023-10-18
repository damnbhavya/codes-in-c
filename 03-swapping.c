//swapping without third variable
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x,&y);
    printf("\nNo. before swapping are x=%d, y=%d.", x,y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("\nNo. after swapping are x=%d, y=%d.", x,y);
    return 0;
}


