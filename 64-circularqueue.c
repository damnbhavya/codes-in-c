#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int front = -1, rear = -1, queue[maxsize];
void enqueue(){
    int item;
    printf("Enter elements: \n");
    scanf("\n%d", &item);
    if((front == 0 && rear == maxsize-1) || (rear == (front - 1) % (maxsize - 1))){
        printf("OVERFLOW\n");
        return;
    }
    if(front == -1){
        front = 0;
        rear = 0;
    }
    else if(rear == maxsize-1 && front != 0){
        rear = 0;
    }
    else{
        rear = rear+1;
    }
    queue[rear] = item;
    printf("Value inserted.\n");
}
void dequeue(){
    int item;
    if(front == -1){
        printf("UNDERFLOW\n");
        return;
    }
    item = queue[front];
    if(front == rear){
        front = -1;
        rear = -1;
    }
    else if(front == maxsize-1){
        front = 0;
    }
    else{
        front = front + 1;
    }
    printf("Value deleted\n");
}
void display(){
    int i;
    if(front == -1){
        printf("EMPTY QUEUE\n");
    }
    else{
        printf("Printing values\n");
        if(rear >= front){
            for(i=front; i<=rear; i++){
                printf("%d\n", queue[i]);
            }
        }
        else{
            for(i=front; i<maxsize; i++){
                printf("%d\n", queue[i]);
            }
            for(i=0; i<=rear; i++){
                printf("%d\n", queue[i]);
            }
        }
    }
}
void main(){
    int choice;
    while(1){
        printf("\nMAIN MENU\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the queue\n");
        printf("4. Exit\n");
        printf("Enter an option: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Enter valid choice. \n");
        }
    }
