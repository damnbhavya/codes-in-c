#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *first;
void display()
{
    struct node *ptr;
    ptr=first;
    printf("\nYour data: ");
    while(ptr!=NULL){
        printf("|%d|->", ptr->info);
        ptr=ptr->link;
    }
}
void create()
{
    struct node *ptr,*ptr2;
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr->info);
    ptr->link=NULL;
    first=ptr;
    do{
    ptr2=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr2->info);
    ptr->link=ptr2;
    ptr=ptr2;
    printf("Want to add more data? Y/N: ");
    fflush(stdin);
    scanf("%c", &ch);
    }
    while(ch=='y');
    ptr->link=NULL;
    display();
}
void insertbeg()
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("\nInsertion not allowed.\n");
    }
    else{
        printf("Enter data in new node: ");
        scanf("%d", &ptr->info);
        ptr->link=first;
        first=ptr;
        printf("Data inserted successfully.\n");
        display();
    }
}
void insertend()
{
    struct node *ptr, *ptr2;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("\nInsertion not allowed. \n");
    }
    else{
        printf("Enter data in new node: ");
        scanf("%d", &ptr->info);
        ptr->link=NULL;
        ptr2=first;
        while(ptr2->link!=NULL){
            ptr2=ptr2->link;
        }
        ptr2->link=ptr;
    }
    printf("Data inserted successfully.\n");
    display();
}
void insertdata()
{
    int data,c=0;
    struct node *ptr, *ptr2, *ptr3;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of new node: ");
    scanf("%d",&ptr->info);
    printf("Enter the info location: ");
    scanf("%d", &data);
    ptr2=first;
    ptr3=first;
    while(ptr3!=NULL){
        if(ptr3->info==data){
            while(ptr2->info!=data){
                ptr2=ptr2->link;
            }
            ptr->link=ptr2->link;
            ptr2->link=ptr;
            printf("Data inserted successfully.\n");
            display();
            c=1;
            break;
        }
        ptr3=ptr3->link;
    }
    if(c==0)
        printf("Specified info location does not exist.\n");
}
void deletebeg()
{
    struct node *ptr;
    ptr=first;
    first=first->link;
    free(ptr);
    printf("Data Deleted sucessfully!\n");
    display();
}
void deleteend()
{
    struct node *ptr, *ptr2;
    ptr=first;
    while(ptr->link!=NULL){
        ptr2=ptr;
        ptr=ptr->link;
    }
    ptr2->link=NULL;
    free(ptr);
    printf("Data Deleted sucessfully!\n");
    display();
}
void deletedata()
{
    struct node *ptr, *ptr2;
    int data;
    printf("Enter the data to be deleted: ");
    scanf("%d", &data);
    ptr=first;
    while(ptr->info!=data){
        ptr2=ptr;
        ptr=ptr->link;
    }
    ptr2->link=ptr->link;
    free(ptr);
    printf("Data Deleted sucessfully!\n");
    display();
}
void main()
{
    int ch;
    int c=1;
    printf("\nMENU: \n");
    printf("0. Create nodes.\n");
    printf("1. Insert at begining.\n");
    printf("2. Insert at end.\n");
    printf("3. Insert after data. \n");
    printf("4. Delete at begning.\n");
    printf("5. Delete at end.\n");
    printf("6. Delete after data.\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    if(ch==0){
        create();
        main();
    }
    else if(ch==1){
        insertbeg();
        main();
    }
    else if(ch==2){
        insertend();
        main();
    }
    else if(ch==3){
        insertdata();
        main();
    }
    else if(ch==4){
        deletebeg();
        main();
    }
    else if(ch==5){
        deleteend();
        main();
    }
    else if(ch==6){
        deletedata();
        main();
    }
    else{
        printf("Invalid Input!");
    }
}
