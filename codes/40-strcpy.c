#include<stdio.h>
#include<string.h>
void main()
{
    char a[50]="hello";
    char b[50];
    strcpy(b,a);
    printf("Original String: %s", a);
    printf("\nCopied String: %s", b);
}
