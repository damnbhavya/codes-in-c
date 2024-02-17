//WAP to print sum of two matrices
#include<stdio.h>
void main()
{
    int mat[20][20],mat2[20][20],sum[20][20],r,c;
    printf("Enter rows and column of the matirx: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter elements: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter a%d%d: ", i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nEnter elements: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter a%d%d: ", i+1,j+1);
            scanf("%d", &mat2[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum[i][j]=mat[i][j]+mat2[i][j];
        }
    }
    printf("Sum of matrices: ");
    for(int i=0; i<r; i++){
        printf("\n");
        for(int j=0; j<c; j++){
            printf("%d ", sum[i][j]);
        }
    }
}