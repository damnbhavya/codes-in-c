//WAP to print the product of two matrices
#include<stdio.h>

void matrix(int mat[][10], int r, int c)
{
    printf("\nEnter elements: \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter a%d%d: ", i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiply(int f[][10],int s[][10],int res[][10],
            int r1,int c1,int r2,int c2)
{
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            res[i][j]=0;
        }
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            {
                res[i][j] += f[i][k]*s[k][j];
            }
        }
    }
}

void display(int res[][10], int r, int c)
{
    printf("Output Matrix: \n");
    for(int i=0; i<r; i++)
    {
        printf("\n");
        for(int j=0; j<c; j++)
        {
            printf("%d  ", res[i][j]);  
        }
    }
}

void main()
{
    int f[10][10],s[10][10],res[10][10],r1,c1,r2,c2;
    printf("Enter rows and column of first matirx: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column of second matirx: ");
    scanf("%d %d", &r2, &c2);

    while(c1 != r2)
    {   
        printf("Invalid Input! Enter rows and column again.\n");
        printf("Enter rows and column of first matirx: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column of second matirx: ");
        scanf("%d %d", &r2, &c2);
    }

    matrix(f,r1,c1);
    matrix(s,r2,c2);
    multiply(f,s,res,r1,c1,r2,c2);
    display(res,r1,c2);
}