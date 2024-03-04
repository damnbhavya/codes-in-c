#include<stdio.h>
#include<stdlib.h>
void merge(int a[], int lb, int mid, int ub)
{
    int i=lb, j=mid+1, ind=lb, temp[1000], k;
    while((i<=mid) && (j<=ub)){
        if(a[i]<a[j]){
            temp[ind]=a[i];
            i++;
        }
        else{
            temp[ind]=a[j];
            j++;
        }
        ind++;
    }
    if(i>mid){
        while(j<=ub){
            temp[ind]=a[j];
            j++;
            ind++;
        }
    }
    else{
        while(i<=mid){
            temp[ind]=a[i];
            i++;
            ind++;
        }
    }
    for(k=lb;k<ind;k++){
        a[k]=temp[k];
    }
}
void mergesort(int a[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void main()
{
    int a[1000],n,i;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int r=(rand()%40)+1;
        a[i]=r;
    }
    printf("Data before merge sort: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    mergesort(a,0,n-1);
    printf("\nData after merge sort: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}