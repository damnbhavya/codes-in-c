//WAP to delete element from a specific index of an array
#include<stdio.h>
void main()
{
    int a[50],n,i,j,ind;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter elements: ");
        scanf("%d", &a[i]);
    }
    printf("Elements of array:\n");
    for(i=0; i<n; i++){
        printf("a[%d] = %d\n", i,a[i]);
    }
    printf("Enter the index: ");
    scanf("%d", &ind);
    for(i=ind; i<n-1; i++){
        a[i] = a[i+1];
    }
    printf("Elements of array after deleting: ");
    for(i=0; i<n-1; i++){
        printf("%d ",a[i]);
    }
}

