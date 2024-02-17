//WAP to check whether a number is armstrong or not
#include<stdio.h>
#include<math.h>
void main()
{
    int n,r,t,c=0,s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t=n;
    while(n>0){
        c+=1;
        n=n/10;
    }
    n=t;
    while(n>0){
        r=n%10;
        s=s+(pow(r,c));
        n=n/10;
    }
    if (s==t){
        printf("Armstrong number");
    }
    else{
        printf("Not an armstrong number");
    }
}