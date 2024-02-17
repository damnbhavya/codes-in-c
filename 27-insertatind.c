//WAP to insert a element in a specific index of an array
#include<stdio.h>
void main()
{
    int a[50],s,i,ind,val;
    printf("Enter the size of array: ");
    scanf("%d", &s);
    for(i=0; i<s; i++){
        printf("Enter element %d: ",i);
        scanf("%d", &a[i]);
    }
    printf("Elements of array:\n");
    for(i=0; i<s; i++){
        printf("a[%d] = %d\n", i,a[i]);
    }
    printf("Enter the index: ");
    scanf("%d", &ind);
    printf("Enter the value: ");
    scanf("%d", &val);
    for(i=s; i>ind; i--){
        a[i]=a[i-1];
    }
    a[ind]=val;
    for(i=0; i<s+1; i++){
        printf("%d ",a[i]);
    }
}