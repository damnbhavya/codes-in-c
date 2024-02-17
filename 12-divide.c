//WAP to print quotient and remainder
#include<stdio.h>
void main()
{
    int a,b;
    float q,r;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    if (b==0){
        printf("Number cannot be divided by zero\n");
    }
    q=a/b;
    r=a%b;
    printf("Quotient: %.2f\n", q);
    printf("Remainder: %.2f", r);
}