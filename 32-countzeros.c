//WAP to print number of zero in an array
#include<stdio.h>
void main()
{
    int a[50],n,i,j,ind,count=0;
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
    for(i=0;i<n;i++){
        if(a[i]==0){
            count += 1;
        }
    }
    printf("There are %d zero's in the array.", count);
}
