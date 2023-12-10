//WAP to print sum of elements in a 1d array
#include<stdio.h>
void main()
{
  int i,n,sum=0;
  printf("Enter the no of elements: ");
  scanf("%d", &n);
  int a[n];
  for (i=0; i<n; i++)
  {
    printf("Enter values of the array: ");
    scanf("%d", &a[i]);
  }
  for (i=0; i<n; i++)
  {
    sum += a[i];
  }
  printf("Sum: %d", sum);
}