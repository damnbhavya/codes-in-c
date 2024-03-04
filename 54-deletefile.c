// WAP to delete a file
#include<stdio.h>
void main()
{
    char filename[50];
    printf("Enter file name: ");
    scanf("%s", filename);
    if(remove(filename)==0){
        printf("File removed sucessfully");
    }
    else{
        printf("Can't find the file");
    }
}