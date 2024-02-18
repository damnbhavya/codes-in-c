#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;          
};
struct node* first;


void create();
void display();
void insert_at_beg();
void insert_at_end();
void insert_after_data();
void delete_at_beg();
void delete_at_end();
void delete_after_data();

void main(){

    int choice;

    create();

    printf("The nodes created by you:");
    display();

    printf("\nMenu:\nEnter 0 for Exit.\nEnter 1 for inserting information at the beginning.\nEnter 2 for inserting information at the end.\nEnter 3 for inserting information after given data.\nEnter 4 for deletion of information at the beginning.\nEnter 5 for deletion of information at the end.\nEnter 6 for deletion of given information.\n");

    
  
    
    for(;;){
  printf("Enter your choice:");
    scanf("%d",&choice);

    if(choice==0){
         break;
    }

    else{
    if(choice==1){
        insert_at_beg();
    }

    else if(choice==2){
        insert_at_end();
    }

    else if(choice==3){
        insert_after_data();
    }

   else if(choice==4){
        delete_at_beg();
    }

   else if(choice==5){
        delete_at_end();
    }

    else if(choice==6){
        delete_after_data();
    }

    else{
        printf("error");
    }
    }
    }


}

//Creation of a Single Linked List
void create(){
    struct node *ptr,*cpt;
    char ch;

    ptr=(struct node*)malloc(sizeof(struct node));

    printf("Enter info:");
    scanf("%d",&ptr->info);
    ptr->link=NULL;
    first=ptr;

    // printf("Do you want to create more Nodes? Press 'Y' for yes and 'N' for no:");
    // char ch;
    // scanf("%d",&ch);

    do{
    
    cpt= (struct node*)malloc(sizeof(struct node));
    printf("Enter info:");
    scanf("%d",&cpt->info);

    ptr->link=cpt;
    ptr=cpt;

    printf("Do you want to create more Nodes? Press 'Y' for yes and 'N' for no:");
    fflush(stdin);
    scanf("%c",&ch);


    }while(ch=='y');

    ptr->link=NULL;


}

//Display Function for the created linked list
void display(){
    struct node*ptr;

    ptr=first;

    printf("Your Info:");

    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr=ptr->link;

    }
}


//Insertion of a node at the beginning of a linked list
void insert_at_beg(){
    struct node *ptr,*cpt;

    ptr=(struct node*)malloc(sizeof(struct node));

    printf("Enter info for new node:");
    scanf("%d",&ptr->info);

    ptr->link=first;
    first=ptr;

    printf("Nodes after insertion of data\n");
    display();
}

//Insertion of a node at the end of a linked list
void insert_at_end(){
    struct node *ptr,*cpt;

    ptr=(struct node*)malloc(sizeof(struct node));

    printf("Enter info for new node:");
    scanf("%d",&ptr->info);
    ptr->link=NULL;

    cpt=first;
    while(cpt->link!=NULL){
        cpt=cpt->link;
    }

    cpt->link=ptr;

    printf("Nodes after insertion of data\n");
    display();

}

//insert a new node after given data
void insert_after_data(){
    int data;
    struct node *ptr,*cpt;

    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter info for new node:");
    scanf("%d",&ptr->info);

    printf("Enter the info after which you want to insert:");
    scanf("%d",&data);

    cpt=first;

    while(cpt->info!=data){
        cpt=cpt->link;
    }

    ptr->link=cpt->link;
    cpt->link=ptr;

    printf("Nodes after insertion of data\n");
    display();
}

//delete a node from the begining
void delete_at_beg(){
    struct node *ptr;
    ptr=first;

    first=first->link;
    free(ptr);

    printf("Nodes after deletion:\n");
    display();
}

//deletion of a node at the end
void delete_at_end(){
    struct node *ptr,*cpt;

    ptr=first;

    while(ptr->link!=NULL){
        cpt=ptr;
        ptr=ptr->link;
    }

    cpt->link=NULL;
    free(ptr);

    printf("Nodes after deletion:\n");
    display();
}


//deletion of a node after given data
void delete_after_data(){
    struct node *ptr,*cpt;
    int data;


    printf("Enter the info you want to delete:");
    scanf("%d",&data);

    ptr=first;
    
    while(ptr->info!=data){
        cpt=ptr;
        ptr=ptr->link;
    }

    cpt->link=ptr->link;
    free(ptr);

    printf("Nodes after deletion:\n");
    display();

}