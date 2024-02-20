// WAP to create a file
#include<stdio.h>
void main()
{
    FILE *fp;
    char filename[50];
    printf("Enter file name: ");
    scanf("%s", filename);
    fp = fopen(filename,"w");
    if(fp==NULL){
        printf("Can't create the file");
    }
    else{
        printf("File created successfully!");
    }
}