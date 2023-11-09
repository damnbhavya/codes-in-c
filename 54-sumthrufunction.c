// #include<stdio.h>
// void sum(int a, int b)
// {
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     printf("Sum of numbers = %d", a+b);
// }

// void main()
// {
//     int a,b;
//     sum(a,b);
// }

#include<stdio.h>
int main()
{
    sum();
    return 0;
}
void sum()
{int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of numbers = %d", a+b);
}