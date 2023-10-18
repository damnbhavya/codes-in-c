#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if ((a % 2) == 0){
        printf("\nNumber is even.");
    }
    else{
        printf("\nNumber is odd.");
    }
}

