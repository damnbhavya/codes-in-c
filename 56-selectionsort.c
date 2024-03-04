#include<stdio.h>
#include<stdlib.h>
int min(int a[], int n, int k)
{
    int small=a[k],i;
    int pos=k;
    for(i=k+1;i<n;i++){
        if (a[i]<small){
            small=a[i];
            pos=i;
        }
    }
    return pos;
}
void selection(int a[], int n)
{
    int k, pos, temp;
    for(k=0;k<n;k++){
        pos = min(a,n,k);
        temp = a[k];
        a[k]=a[pos];
        a[pos]=temp;
    }
}
void main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%50;
    }
    printf("Before sorting: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    selection(a,n);
    printf("\nAfter sorting: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
