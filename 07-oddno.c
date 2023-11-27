//WAP to print odd numbers
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=1; i<=n; i=i+2)
    {
        printf("%d\n", i);
    }
}