#include <stdio.h>
void square(int s)
{
    int area_s;
    printf("Enter side: ");
    scanf("%d", &s);
    area_s = s*s;
    printf("Area of square: %d",area_s);
}

void circle(int c)
{
    int area_c;
    printf("Enter the circumference: ");
    scanf("%d", &c);
    area_c = (2*22*c)/7;
    printf("Area of circle: %d",area_c);
}

void rectangle(int l,int b)
{
    int area_r;
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the breadth: ");
    scanf("%d", &b);
    area_r = l*b;
    printf("Area of rectangle: %d",area_r);
}

int main()
{
    int shape,s,c,l,b;
    printf("Choose the action:\n");
    printf("1. Area of square\n2. Area of circle\n3. Area of rectangle\n");
    scanf("%d", &shape);
    if(shape == 1)
    {
        square(s);
    }
    else if(shape == 2)
    {
        circle(c);
    }
    else if(shape == 3)
    {
        rectangle(l,b);
    }
    else
    {
        printf("Invalid Input");
    }
}