//WAP to compare two strings by their length
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="welcome";
    char p[50]="byebyee";
    int sl=strlen(s);
    int pl=strlen(p);
    if(sl==pl)
    {
        printf("Length of the strings is equal.");
    }
    else
    {
        printf("Length of the string is not equal.");
    }
}