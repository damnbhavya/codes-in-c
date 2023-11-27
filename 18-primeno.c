//WAP to check whether a number is prime or not
#include<stdio.h>
void main()
{
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n==2){
        printf("%d is a prime number.\n", n);
    }
    else{
        for(i=2; i<n; i++){
            if(n%i==0){
                c=1;
                break;
            }
        }
        if(c==0){
            printf("%d is a prime number.\n", n);
        }
        else{
            printf("%d is not a prime number.\n", n);
        }
    }
}

