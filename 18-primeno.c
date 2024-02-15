//WAP to check whether a number is prime or not
#include<stdio.h>
void main()
{
    int n,i,c=0,s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n==2)
    {
        printf("%d is a prime number.\n", n);
    }
    else{
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                s=s+1;
                c=1;
                break;
            }
        }
        if(s==0)
        {
            printf("%d is a prime number.\n", n);
        }
        else if(s==1)
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }
    }
}