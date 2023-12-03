//WAP to use ackermann function using recursion
#include<stdio.h>
int ackermann(int m, int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(n==0)
    {
        return ackermann(m-1,1);
    }
    else
    {
        return ackermann(m-1,ackermann(m,n-1));
    }
}
void main()
{
    int m=2, n=1;
    printf("Result: %d", ackermann(m,n));
}