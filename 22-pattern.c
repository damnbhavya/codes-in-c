//WAP to print this pattern
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5
#include<stdio.h>
void main()
{
    int i,j,n=1;
    for (i=1; i<=5; i++)
    {
        printf("\n");
        n = 1;
        for (j=1; j<=i; j++)
        {
            printf("%d ", n);
            n = n+1;
        }
    }
}