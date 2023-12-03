//WAP to copy the contents of a file into another file
#include<stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char filename[50],ch;
    printf("Enter filename: ");
    scanf("%s", filename);
    fp1 = fopen(filename,"r");
    fp2 = fopen("output.txt","w");
    if(fp1==NULL || fp2==NULL){
        printf("Error opening the files.\n");
        return 1;
    }
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Content copied successfully.\n");
    return 0;
}