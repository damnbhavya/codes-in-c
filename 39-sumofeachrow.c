//WAP to print sum of each rows of matrix
#include<stdio.h>
void main()
{
    int mat[10][10],r,c,sum;
    printf("Enter rows and columns of the matirx: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements: \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter a%d%d: ", i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0; i<r; i++)
    {
        sum = 0;
        for(int j=0; j<c; j++)
        {
            
            sum += mat[i][j];
        }
        printf("Sum of row %d is %d\n", i+1, sum);
    }
}
    