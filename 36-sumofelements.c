//WAP to print sum of elements of an array
#include<stdio.h>
void main()
{
    int mat[10][10],r,c,sum=0;
    printf("Enter rows and columns of the matirx: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter elements: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter a%d%d: ", i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum += mat[i][j];
        }
    }
    printf("Sum of elements of the matrix is %d", sum);
}