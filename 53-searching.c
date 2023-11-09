#include<stdio.h>
void main()
{
    int a[50],n,i,j,ind;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter elements: ");
        scanf("%d", &a[i]);
    }
    printf("Elements of array:\n");
    for(i=0;i<n;i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("Enter the index: ");
    scanf("%d", &ind);
    for(i=0;i<n;i++){
        if(a[i]==a[ind]){
            printf("Index %d contains %d", i,a[i]);
            break;
        }
    }
}