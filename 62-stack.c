#include<stdio.h>
int a[100],top=-1,n;
void push()
{
    int val;
    if(top==n)
        printf("\n----- OVERFLOW -----\n");
    else{
        printf("Enter the value: ");
        scanf("%d", &val);
        top++;
        a[top]=val;
    }
}
void pop()
{
    if(top==-1)
        printf("\n----- UNDERFLOW -----\n");
    else{
        printf("%d popped",a[top]);
        a[top]=0;
        top--;
    }
}
int show()
{
    if(top==-1){
        printf("Stack is empty.");
        return 0;
    }
    printf("%d<--TOP\n",a[top]);
    for(int i=top-1;i>=0;i--){
        printf("%d\n",a[i]);
    }

}
void main()
{
    int ch;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\n----- MAIN MENU -----\n");
    while(ch!=4){
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("Exiting...");
                break;
            default:
                printf("Invalid Input!");
        };
    }
}