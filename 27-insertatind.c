//WAP to insert a element in a specific index of an array
#include<stdio.h>
void main()
{
    int a[50],n,i,j,ind,temp,val,temp2;
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
    printf("Enter the value: ");
    scanf("%d", &val);
    temp = a[ind];
    temp2 = a[ind+1];
    a[ind] = val;

    for(i=ind+1; i<n+1; i++){
        a[i] = temp;
        temp = temp2;
        temp2 = a[i+1];
    }
    for(i=0; i<n+1; i++){
        printf("%d ",a[i]);
    }
}

