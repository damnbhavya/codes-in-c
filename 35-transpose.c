//WAP to print the transpose of a matrix
#include<stdio.h>
void main()
{
    int mat[10][10],r,c,i,j;
    printf("Enter rows and column of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter a%d%d: ", i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Original Matrix: ");
    for(i=0; i<r; i++)
    {
        printf("\n");
        for(j=0; j<c; j++)
        {
            printf("%d ", mat[i][j]);
        }
    }
    printf("Transpose of the matirx: ");
    for(i=0; i<c; i++)
    {
        printf("\n");
        for(j=0; j<r; j++)
        {
            printf("%d ", mat[j][i]);
        }
    }
}