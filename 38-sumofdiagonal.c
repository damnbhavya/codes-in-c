//WAP to print sum of diagonal elements of a matrix
#include <stdio.h>
void main()
{
    int mat[10][10],s,i,j,sum=0;
    printf("Enter order of the square matirx: ");
    scanf("%d", &s);

    printf("Enter elements: \n");
    for(i=0; i<s; i++)
    {
        for(j=0; j<s; j++)
        {
            printf("Enter a%d%d: ", i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i<s; i++)
    {
        for(j=0; j<s; j++)
        {
            if(i==j)
            {
                sum += mat[i][j];
            }
        }
    }
    printf("Sum of diagonal elements: %d", sum);
}