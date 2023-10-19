//displaying the division on the basis of result
#include<stdio.h>
void main()
{
    int a;
    printf("Enter your percentage: ");
    scanf("%d", &a);
    if (a > 75)
    {
        printf("You are in first divison.");
    }
    else if (a > 65)
    {
        printf("You are in second division.");
    }
    else if (a > 50)
    {
        printf("You are in third division.");
    }
    else
    {
        printf("You failed.");
    }
}