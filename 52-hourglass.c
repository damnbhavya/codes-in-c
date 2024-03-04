// WAP to display largest sum of hour glass in a matrix
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[6][6],sum=0,range=-63;
    for(int i=0; i<6;i++){
        for(int j=0; j<6;j++){
            a[i][j] = rand()%9;
        }
    }
    printf("Array: ");
    for(int i=0; i<6;i++){
        printf("\n");
        for(int j=0; j<6;j++){
            printf("%d ",a[i][j]);
        }
    }
    for(int i=0; i<=3;i++){ 
        for(int j=0; j<=3;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>range){
                range=sum;
            }
        }
    }
    printf("\nLargest sum of hour glass: %d",range);
}