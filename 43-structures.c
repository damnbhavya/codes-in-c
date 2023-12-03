//WAP to implement structures
#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
    float marks;
};
void main()
{
    struct student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter RollNo: ");
    scanf("%d", &s1.rollno);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.rollno);
    printf("Marks: %.2f\n", s1.marks);
}