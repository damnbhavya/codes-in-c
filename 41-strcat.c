#include<stdio.h>
#include<string.h>
void main()
{
    char a[50]="hello";
    char b[50]=" world";
    strcat(a, b);
    printf("Concatenated string: %s", a);
}
