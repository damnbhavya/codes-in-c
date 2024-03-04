#include<stdio.h>
#include<stdlib.h>
int quick(int a[], int beg, int end)
{
    int left, right, temp, loc, flag;
    loc = left+beg;
    right=end;
    flag=0;
    while(flag!=1){
        while((a[loc]<=a[right]) && (loc!=right)){
            right--;
            if(loc==right){
                flag=1;
            }
            else if(a[loc]>a[right]){
                temp=a[loc];
                a[loc]=a[right];
                a[right]=temp;
                loc=right;
            }
            if(flag!=1){
                while((a[loc]>=a[left]) && (loc!=left))
                left++;
                if(loc=left)
                flag=1;
                else if(a[loc]<a[left]){
                    temp = a[loc];
                    a[loc]=a[left];
                    a[left]=temp;
                    loc=left;
                }
            }
        }
    }
    return loc;
}
void Quicksort(int a[],int lb, int ub)
{
    int mid;
    if(lb>ub){
        mid=Quick(a,lb,ub);
        Quicksort(a,lb,mid-1);
        Quicksort(a,mid+1,ub);
    }
}
void main()
{
    int a[1000],n,i;
    printf("En");
}