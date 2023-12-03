//WAP to implement union
#include<stdio.h>
#include<string.h>
union student
{
    char name[50];
    int rollno;
    float marks;
};
void main()
{
    union student s1;
    char n[50]; int r; float m;
    printf("Enter name: ");
    scanf("%s",n);
    printf("Enter RollNo: ");
    scanf("%d", &r);
    printf("Enter marks: ");
    scanf("%f", &m);
    printf("\nStudent Details:\n");
    strcpy(s1.name,n);
    printf("Name: %s\n",s1.name);
    s1.rollno=r;
    printf("Roll No: %d\n",s1.rollno);
    s1.marks=m;
    printf("Marks: %.2f\n",s1.marks);
}