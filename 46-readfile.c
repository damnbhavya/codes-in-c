//WAP to read a file
#include<stdio.h>
int main()
{
    FILE *pointer;
    char filename[50];
    printf("\n Enter filename: ");
    scanf("%s", filename);
    pointer=fopen(filename, "r");
    if(pointer==NULL){
        printf("Can't open the file %s.\n",filename);
        return 1;
    }
    printf("\nContents of file %s.\n",filename);
    char ch;
    while((ch=fgetc(pointer))!=EOF){
        printf("%c", ch);
    }
    fclose(pointer);
    return 0;
}