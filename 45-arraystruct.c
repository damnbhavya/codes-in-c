//WAP to create an array using structures
#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
    float marks;
};
void main()
{
    struct student s[2];
    int i;
    for(i=0; i<2; i++){
        printf("Enter name, rno of student %d: ",i+1);
        scanf("%s %d", s[i].name,&s[i].rollno);
        printf("Enter the marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent Details:\n");
    for(i=0;i<2;i++){
        printf("Name: %s\n",s[i].name);
        printf("Roll no: %d\n", s[i].rollno);
        printf("Marks: %.2f\n",s[i].marks);
    }
}