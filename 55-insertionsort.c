//WAP to perform insertion sort
#include<stdio.h>
#include<stdlib.h>
void insert(int a[], int n)
{
    int i,j,temp;
    for(i=1; i<n; i++){
 	temp=a[i];
 	j=i-1;
 	while((temp<a[j]) && (j>=0)){
 		a[j+1] = a[j];
		j--;
 	}
 	a[j+1]=temp;
    }
}
void main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%9;
    }
    printf("Before sorting: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    insert(a,n);
    printf("After sorting: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}