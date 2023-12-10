//WAP to perform insertion in an array
#include<stdio.h>
void main()
{
    int i,a[5];
    for(i=0; i<5; i++)
    {
        printf("Enter elements of array: ");
        scanf("%d", &a[i]);
    }
    printf("Array: ");
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
}