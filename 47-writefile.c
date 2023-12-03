//WAP to write data in file
#include<stdio.h>
int main()
{
    FILE *pointer;
    char filename[50];
    char data[100];
    printf("Enter the filename: ");
    scanf("%s",filename);
    pointer = fopen(filename,"w");
    if (pointer==NULL)
    {
        printf("File not found!");
        return 1;
    }
    printf("Enter data: \n");
    getchar();
    fgets(data,sizeof(data),stdin);
    fputs(data,pointer);
    fclose(pointer);
    printf("Data successfully written!");
    return 0;
}
