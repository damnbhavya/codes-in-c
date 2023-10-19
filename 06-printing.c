// printing a integer, float and character value using scanf function
#include<stdio.h>
void main()
{
    int a;
    float b;
    char d;
    printf("Enter an integer no: \n");
    scanf("%d",&a);
    printf("Enter an float no: \n");
    scanf("%f",&b);
    printf("Enter an character no: \n");
    // always add a space before "%c"
    scanf(" %c",&d);
    printf("Integer: %d \n",a);
    printf("Float: %f \n",b);
    printf("Character: %c",d);

}