//WAP to print this pattern
// 1 
// 1 1 
// 1 1 1 
// 1 1 1 1 
// 1 1 1 1 1
#include<stdio.h>
void main()
{
    int i,j;
    for (i=1; i<=5; i++)
    {
        printf("\n");
        for (j=1; j<=i; j++)
        {
            printf("1 ");
        }
    }
}   