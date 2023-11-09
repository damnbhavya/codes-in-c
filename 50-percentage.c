#include <stdio.h>
void main()
{
  int i,n,sum=0;
  printf("Enter the no of subjects: ");
  scanf("%d", &n);
  int a[n];
  for (i=0; i<n; i++)
  {
    printf("Enter marks of subject %d: ", i+1);
    scanf("%d", &a[i]);
  }
  for (i=0; i<n; i++)
  {
    sum += a[i];
  }
  int total = n*100;
  int per = (sum*100)/total;
  printf("Percentage: %d", per);
}
