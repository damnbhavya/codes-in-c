//WAP to print this pattern
// A 
// A B 
// A B C 
// A B C D 
#include<stdio.h>
void main()
{
    int i,j,n=65;
    for (i=1; i<=4; i++)
    {
        printf("\n");
        n = 65;
        for (j=1; j<=i; j++)
        {
            printf("%c ", n);
            n = n+1;
        }
    }
}