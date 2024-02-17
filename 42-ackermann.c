//WAP to use ackermann function using recursion
#include<stdio.h>
int ackermann(int m,int n)
{
    if(m==0){
        printf("I am Here");
        return(n+1);
    }
    else if(m>0 && n==0){
        printf("I am in return 2");
        return ackermann(m-1,1);
    }
    else{
        printf("I am in return 3");
        return ackermann(m-1,A(m,n-1));
    }
}
void main()
{
    int m,n,sol;
    printf("Enter m &n");
    scanf("%d%d",&m,&n);
    sol = ackermann(m,n);
    printf("sol");
}