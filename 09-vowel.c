//WAP to check whether a alphabet is vowel or not
#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("Enter a alphabet: ");
    scanf(" %c", &ch);
    ch = tolower(ch);
    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is a vowel", ch);
        break;
        default:
        printf("%c is a consonent", ch);
    }
}