//WAP to check the number of characters, floating, integers in a file
#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *pointer;
    char filename[50];
    char ch;
    printf("Enter filename: ");
    scanf("%s", filename);
    pointer = fopen(filename,"r");
    if(pointer==NULL)
    {
        printf("File not found!");
        return 1;
    }
    int ccount=0, icount=0, fcount=0;
    int number=0;
    while((ch=fgetc(pointer))!=EOF)
    {
        if(isalpha(ch)||ispunct(ch)||isspace(ch))
        {
            if(number)
            {
                fcount ++;
            }
        }
        else if (isdigit(ch))
        {
            number=1;
        }
        ccount++;
    }
    if(number)
    {
        fcount++;
    }
    fclose(pointer);
    printf("Analysis of file %s:\n", filename);
    printf("No of character: %d\n",ccount);
    printf("No of integers: %d\n",icount);
    printf("No of floats: %d\n",fcount);
    return 0;
}