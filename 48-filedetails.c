//WAP to check the number of characters, letter, integers, space in a file
#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *pointer;
    char filename[50];
    printf("\n Enter filename: ");
    scanf("%s", filename);
    pointer = fopen(filename, "r");
    if(pointer == NULL)
    {
        printf("Can't open the file %s.\n",filename);
        return 1;
    }
    int ccount=0,lcount=0,icount=0,scount=0;
    char ch;
    while((ch=fgetc(pointer))!=EOF){
        if(isalpha(ch)){
            lcount++;
        }
        else if(isdigit(ch)){
            icount++;
        }
        else if(isspace(ch)){
            scount++;
        }
        ccount++;
    }
    printf("Number of characters : %d\n",ccount);
    printf("Number of letters : %d\n",lcount);
    printf("Number of integers : %d\n",icount);
    printf("Number of spaces : %d\n",scount);
    fclose(pointer);
}