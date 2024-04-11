// // WAP to perform binary search
// #include<stdio.h>
// #include<stdlib.h>
// int binary(int a[], int beg, int end, int item)
// {
//     int mid;
//     while(beg<=end){
//         mid = (int)(beg+end)/2;
//         if (item ==a[mid]){
//             return mid;
//         }
//         else if(item<a[mid]){
//             beg=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         return -1;
//     }
// }
// void main()
// {
//     int ub,item,lb=0;
//     printf("Enter the lenth of the array: ");
//     scanf("%d",&ub);
//     int a[ub];
//     for(int i=0; i<ub; i++){
//         a[i]=rand()%9;
//     }
//     for(int i=0; i<ub; i++){
//         printf("%d ", a[i]);
//     }
//     printf("Enter the item to search: ");
//     scanf("%d",&item);
//     int output=binary(a,lb,ub,item);
//     printf("Output: %d",output);
// }



// WAP to perform binary search using recursion
#include<stdio.h>
#include<stdlib.h>
int binary(int a[], int beg, int end, int item)
{
    int mid;
    if(beg<end){
        mid = (int)(beg+end)/2;
        if (item ==a[mid]){
            return mid;
        }
        else if(item<a[mid]){
            binary(a,beg,mid-1,item);
        }
        else{
            binary(a,mid+1,end,item);
        }
        return -1;
    }
} 
void main()
{
    int ub,item,lb=0;
    printf("Enter the lenth of the array: ");
    scanf("%d",&ub);
    int a[ub];
    for(int i=0; i<ub; i++){
        a[i]=rand()%9;
    }
    for(int i=0; i<ub; i++){
        printf("%d ", a[i]);
    }
    printf("Enter the item to search: ");
    scanf("%d",&item);
    int output=binary(a,lb,ub,item);
    printf("Output: %d",output);
}