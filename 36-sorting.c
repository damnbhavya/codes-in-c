#include<stdio.h>
void main()
{
    int a[50],n,i,j,temp;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter elements: ");
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}