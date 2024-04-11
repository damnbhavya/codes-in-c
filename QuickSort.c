#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void QuickSort(int[],int,int);
int Quick(int[],int,int);
void main()
{
	int a[1000],n,i;
	printf("Enter the number of elements you want to enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int r = (rand() % 1000) + 1;
		a[i]=r;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	QuickSort(a,0,n-1);
	printf("\n Data After Quick Sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void QuickSort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=Quick(a,lb,ub);
		QuickSort(a,lb,mid-1);
		QuickSort(a,mid+1,ub);
	}
}
int Quick(int a[],int beg,int end)
{
	int left, right, temp, loc, flag;
	loc = left = beg;
	right = end;
	flag = 0;
	while(flag != 1)
	{
	while((a[loc] <= a[right]) && (loc!=right))
		right--;
		if(loc==right)
 	flag =1;
 	else if(a[loc]>a[right])
 	{
 		temp = a[loc];
 		a[loc] = a[right];
 		a[right] = temp;
 		loc = right;
 	}
	if(flag!=1)
 	{
		while((a[loc] >= a[left]) && (loc!=left))
		left++;
 		if(loc==left)
		flag =1;
 		else if(a[loc] <a[left])
 		{
 			temp = a[loc];
			a[loc] = a[left];
			a[left] = temp;
			loc = left;
 		}
 	}
	}
return loc;
}