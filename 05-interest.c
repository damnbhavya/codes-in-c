// WAP to calculate simple interest 
#include<stdio.h>
void main()
{
    float si,p,r,s,t;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest:");
    scanf("%f", &r);
    printf("Enter the time duration: ");
    scanf("%f", &t);
    si = (p*r*t)/100;
    printf("Simple interest: %f", si);
}