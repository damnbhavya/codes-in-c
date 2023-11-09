//write a program to find the length of the string and copy the string, reverse,concatinate, and compare.
#include<stdio.h>
#include<string.h>
void length()
{
    char a[50]; int b;
    printf("Enter the string 1: ");
    scanf("%s", &a);
    b = strlen(a);
    printf("Length of the string: %d\n", b);
}
void copy()
{
    char a[50], b[50];
    printf("Enter the string 1: ");
    scanf("%s", &a);
    strcpy(b,a);
    printf("Copied string: %s\n", b);
}
void reverse()
{
    char a[50];
    printf("Enter the string 1: ");
    scanf("%s", &a);
    printf("Original string: %s\n", a);
    strrev(a);
    printf("Reversed string: %s\n", a);
}
void concat()
{
    char a[50], b[50];
    printf("Enter the string 1: ");
    scanf("%s", &a);
    printf("Enter the string 2: ");
    scanf("%s", &b);
    strcat(a,b);
    printf("Concatenated string: %s\n", a);
}
void compare()
{
    char a[50], b[50]; int c;
    printf("Enter the string 1: ");
    scanf("%s", &a);
    printf("Enter the string 2: ");
    scanf("%s", &b);
    c = strcmp(a,b);
    if (c==0)
    printf("String %s and %s are equal\n", a,b);
    else
    printf("String %s and %s are not equal\n", a,b);
}

int main()
{
    int ch;
    printf("MAIN MENU --->\n");
    printf("1. LENGTH OF THE STRING\n");
    printf("2. COPY A STRING\n");
    printf("3. REVERSE A STRING\n");
    printf("4. CONCATENATE TWO STRINGS\n");
    printf("5. COMPARE TWO STRINGS\n");
    printf("\nEnter the choice: \n");
    scanf("%d",&ch);
    if(ch==1){
    length();
    main();
    }
    else if(ch==2){
    copy();
    main();
    }
    else if(ch==3){
    reverse();
    main();
    }
    else if(ch==4){
    concat();
    main();
    }
    else if(ch==5){
    compare();
    main();
    }
    else
    printf("Invalid Input!");    
}