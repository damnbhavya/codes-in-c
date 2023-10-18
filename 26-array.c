#include<stdio.h>
void main()
{
    int i,j,n,n2;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter values of the array: ");
        scanf("%d",&n2);
        a[i]=n2;
    }
    for(j=0; j<n; j++){
      printf("%d ", a[j]);
    }
}

