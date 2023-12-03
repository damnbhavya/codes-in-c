//WAP to print 1 to 10 using for, while, do-while loop
#include<stdio.h>
void main()
{
    int i=1;
    printf("Using for loop:\n");
    for(i=1; i<=10; i++){
        printf("%d ", i);
    } i=1;
    printf("\nUsing while loop:\n");
    while(i<=10){
        printf("%d ", i);
        i++;
    } i=1;
    printf("\nUsing do-while loop:\n");
    do{
        printf("%d ", i);
        i++;
    } while(i<=10);
}