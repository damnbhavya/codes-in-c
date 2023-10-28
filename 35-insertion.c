#include<stdio.h>
void main()
{
    int i, n, a[5];
    for(i=0;i<5;i++)
    {
        printf("Enter elements of array: ");
        scanf("%d", &n);
        a[i] = n;
    }
    printf("Array: ");
    for(i=0;i<5;i++)
    {
        printf("%d ", a[i]);
    }
}