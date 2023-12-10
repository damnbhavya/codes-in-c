//WAP to use malloc function
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int* ptr, n,i;
    printf("Enter the element: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Allocation fail!");
        exit(0);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("Enter element %d : ",i+1);
            scanf("%d", ptr+i);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", *(ptr+i));
    }
    free(ptr);
}