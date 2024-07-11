// #include<stdio.h>

// int main()
// {
//     int a = 5;
//     int *ptr = &a;

//     printf("Value of a: %d\n", a);
//     printf("Address of a: %p\n", (void*)&a);
//     printf("Value of a using pointer: %d\n", *ptr);
//     printf("Address of a using pointer: %p\n", (void*)ptr);
//     printf("Address of pointer: %p\n", (void*)&ptr);

//     return 0;
// }

// //wap to pass pointers to a function
// #include<stdio.h>
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int x = 5, y = 10;
//     printf("Before swapping: x = %d, y = %d\n", x, y);
//     swap(&x, &y);
//     printf("After swapping: x = %d, y = %d\n", x, y);
//     return 0;
// }


// //Wap to implement linked list menu with all the functions for insertion, deletion, and traversing.

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head = NULL;
// void insert_at_beginning(int data)
// {
//     struct node *new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = data;
//     new_node->next = head;
//     head = new_node;
// }
// void insert_at_end(int data)
// {
//     struct node *new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = data;
//     new_node->next = NULL;
//     if(head == NULL){
//         head = new_node;
//         return;
//     }
//     struct node *temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = new_node;
// }
// void insert_at_position(int data, int position)
// {
//     struct node *new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = data;
//     new_node->next = NULL;
//     if(position == 1){
//         new_node->next = head;
//         head = new_node;
//         return;
//     }
//     struct node *temp = head;
//     for(int i = 1; i < position - 1; i++){
//         temp = temp->next;
//     }
//     new_node->next = temp->next;
//     temp->next = new_node;
// }
// void delete_at_beginning()
// {
//     if(head == NULL){
//         printf("List is empty\n");
//         return;
//     }
//     struct node *temp = head;
//     head = head->next;
//     free(temp);
// }
// void delete_at_end()
// {
//     if(head == NULL){
//         printf("List is empty\n");
//         return;
//     }
//     if(head->next == NULL){
//         free(head);
//         head = NULL;
//         return;
//     }
//     struct node *temp = head;
//     while(temp->next->next != NULL){
//         temp = temp->next;
//     }
//     free(temp->next);
//     temp->next = NULL;
// }
// void delete_at_position(int position)
// {
//     if(head == NULL){
//         printf("List is empty\n");
//         return;
//     }
//     if(position == 1){
//         struct node *temp = head;
//         head = head->next;
//         free(temp);
//         return;
//     }
//     struct node *temp = head;
//     for(int i = 1; i < position - 1; i++){
//         temp = temp->next;
//     }
//     struct node *temp1 = temp->next;
//     temp->next = temp1->next;
//     free(temp1);
// }
// void display()
// {
//     if(head == NULL){
//         printf("List is empty\n");
//         return;
//     }
//     struct node *temp = head;
//     while(temp != NULL){
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     int choice, data, position;
//     while(1)
//     {
//         printf("1. Insert at beginning\n");
//         printf("2. Insert at end\n");
//         printf("3. Insert at position\n");
//         printf("4. Delete at beginning\n");
//         printf("5. Delete at end\n");
//         printf("6. Delete at position\n");
//         printf("7. Display\n");
//         printf("8. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch(choice)
//         {
//             case 1:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 insert_at_beginning(data);
//                 break;
//             case 2:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 insert_at_end(data);
//                 break;
//             case 3:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 printf("Enter position: ");
//                 scanf("%d", &position);
//                 insert_at_position(data, position);
//                 break;
//             case 4:
//                 delete_at_beginning();
//                 break;
//             case 5:
//                 delete_at_end();
//                 break;
//             case 6:
//                 printf("Enter position: ");
//                 scanf("%d", &position);
//                 delete_at_position(position);
//                 break;
//             case 7:
//                 display();
//                 break;
//             case 8:
//                 exit(0);
//             default:
//                 printf("Invalid choice\n");
//         }
//     }
//     return 0;
// }

// // Wap  to illustrate the multiplication of two sparse matrices using arrays.

// #include<stdio.h>

// int main()
// {
//     int m1, n1, m2, n2;
//     printf("Enter the number of rows and columns of first matrix: ");
//     scanf("%d %d", &m1, &n1);
//     printf("Enter the number of rows and columns of second matrix: ");
//     scanf("%d %d", &m2, &n2);
//     if(n1 != m2){
//         printf("Multiplication of matrices not possible\n");
//         return 0;
//     }
//     int a[m1][n1], b[m2][n2], c[m1][n2];
//     printf("Enter the elements of first matrix: \n");
//     for(int i = 0; i < m1; i++){
//         for(int j = 0; j < n1; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter the elements of second matrix: \n");
//     for(int i = 0; i < m2; i++){
//         for(int j = 0; j < n2; j++){
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(int i = 0; i < m1; i++){
//         for(int j = 0; j < n2; j++){
//             c[i][j] = 0;
//             for(int k = 0; k < n1; k++){
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
//     printf("Product of matrices: \n");
//     for(int i = 0; i < m1; i++){
//         for(int j = 0; j < n2; j++){
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// // Wap  to illustrate the multiplication of two sparse matrices using linked list.

// #include<stdio.h>
// struct node
// {
//     int row;
//     int column;
//     int data;
//     struct node *next;
// };
// struct node *head1 = NULL;
// struct node *head2 = NULL;
// struct node *head3 = NULL;
// void insert(struct node **head, int row, int column, int data)
// {
//     struct node *new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->row = row;
//     new_node->column = column;
//     new_node->data = data;
//     new_node->next = NULL;
//     if(*head == NULL){
//         *head = new_node;
//         return;
//     }
//     struct node *temp = *head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = new_node;
// }
// void display(struct node *head)
// {
//     struct node *temp = head;
//     while(temp != NULL){
//         printf("%d %d %d\n", temp->row, temp->column, temp->data);
//         temp = temp->next;
//     }
// }
// void multiply()
// {
//     struct node *temp1 = head1;
//     while(temp1 != NULL){
//         struct node *temp2 = head2;
//         while(temp2 != NULL){
//             if(temp1->column == temp2->row){
//                 struct node *temp3 = head3;
//                 while(temp3 != NULL){
//                     if(temp3->row == temp1->row && temp3->column == temp2->column){
//                         temp3->data += temp1->data * temp2->data;
//                         break;
//                     }
//                     temp3 = temp3->next;
//                 }
//                 if(temp3 == NULL){
//                     insert(&head3, temp1->row, temp2->column, temp1->data * temp2->data);
//                 }
//             }
//             temp2 = temp2->next;
//         }
//         temp1 = temp1->next;
//     }
// }
// int main()
// {
//     int m1, n1, m2, n2;
//     printf("Enter the number of rows and columns of first matrix: ");
//     scanf("%d %d", &m1, &n1);
//     printf("Enter the number of rows and columns of second matrix: ");
//     scanf("%d %d", &m2, &n2);
//     if(n1 != m2){
//         printf("Multiplication of matrices not possible\n");
//         return 0;
//     }
//     printf("Enter the elements of first matrix: \n");
//     for(int i = 0; i < m1; i++){
//         for(int j = 0; j < n1; j++){
//             int data;
//             scanf("%d", &data);
//             if(data != 0){
//                 insert(&head1, i, j, data);
//             }
//         }
//     }
//     printf("Enter the elements of second matrix: \n");
//     for(int i = 0; i < m2; i++){
//         for(int j = 0; j < n2; j++){
//             int data;
//             scanf("%d", &data);
//             if(data != 0){
//                 insert(&head2, i, j, data);
//             }
//         }
//     }
//     multiply();
//     display(head3);
//     return 0;
// }


// //WAP to illustrate the multiplication of two sparse matrices(triplet representation)

// #include<stdio.h>
// int main()
// {
//     int m1, n1, m2, n2;
//     printf("Enter the number of rows and columns of first matrix: ");
//     scanf("%d %d", &m1, &n1);
//     printf("Enter the number of rows and columns of second matrix: ");
//     scanf("%d %d", &m2, &n2);
//     if(n1 != m2){
//         printf("Multiplication of matrices not possible\n");
//         return 0;
//     }
//     int count1, count2;
//     printf("Enter the number of non-zero elements in first matrix: ");
//     scanf("%d", &count1);
//     printf("Enter the number of non-zero elements in second matrix: ");
//     scanf("%d", &count2);
//     int a[count1][3], b[count2][3];
//     printf("Enter the elements of first matrix (row, column, value): \n");
//     for(int i = 0; i < count1; i++){
//         scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
//     }
//     printf("Enter the elements of second matrix (row, column, value): \n");
//     for(int i = 0; i < count2; i++){
//         scanf("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
//     }
//     int count = 0;
//     for(int i = 0; i < m1; i++){
//         for(int j = 0; j < n2; j++){
//             int sum = 0;
//             for(int k = 0; k < n1; k++){
//                 for(int l = 0; l < count1; l++){
//                     if(a[l][0] == i && a[l][1] == k){
//                         for(int m = 0; m < count2; m++){
//                             if(b[m][0] == k && b[m][1] == j){
//                                 sum += a[l][2] * b[m][2];
//                                 break;
//                             }
//                         }
//                         break;
//                     }
//                 }
//             }
//             if(sum != 0){
//                 count++;
//             }
//         }
//     }
//     int c[count][3];
//     int k = 0;
//     for(int i = 0; i < m1; i++){
//         for(int j = 0; j < n2; j++){
//             int sum = 0;
//             for(int l = 0; l < n1; l++){
//                 for(int m = 0; m < count1; m++){
//                     if(a[m][0] == i && a[m][1] == l){
//                         for(int n = 0; n < count2; n++){
//                             if(b[n][0] == l && b[n][1] == j){
//                                 sum += a[m][2] * b[n][2];
//                                 break;
//                             }
//                         }
//                         break;
//                     }
//                 }
//             }
//             if(sum != 0){
//                 c[k][0] = i;
//                 c[k][1] = j;
//                 c[k][2] = sum;
//                 k++;
//             }
//         }
//     }
//     printf("Product of matrices: \n");
//     for(int i = 0; i < count; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//WAP to implement stack using linked list

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *top = NULL;
// void push(int data)
// {
//     struct node *new_node;
//     new_node=(struct node*)malloc(sizeof(struct node));
//     new_node->data = data;
//     new_node->next = top;
//     top = new_node;
// }
// void pop()
// {
//     if(top == NULL){
//         printf("UNDERFLOW\n");
//         return;
//     }
//     struct node *temp = top;
//     top = top->next;
//     free(temp);
// }
// void display()
// {
//     if(top == NULL){
//         printf("EMPTY STACK\n");
//         return;
//     }
//     struct node *temp = top;
//     while(temp != NULL){
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     int choice, data;
//     while(1)
//     {
//         printf("1. Push\n");
//         printf("2. Pop\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch(choice)
//         {
//             case 1:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 push(data);
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 exit(0);
//             default:
//                 printf("Invalid choice\n");
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *link;
// };
// struct node *top=NULL;
// void push(int data)
// {
//     struct node *new;
//     new=(struct node*)malloc(sizeof(struct node));
//     new->data=data;
//     new->link=top;
//     top=new;
// }
// void pop()
// {
//     if(top == NULL){
//         printf("Underflow");
//         return;
//     }
//     struct node *temp=top;
//     top=top->link;
//     free(temp);
// }
// void display()
// {
//     if(top==NULL){
//         printf("Underflow");
//         return;
//     }
//     struct node *temp = top;
//     while(temp != NULL){
//         printf("%d ",temp->data);
//         temp=temp->link;
//     }
//     printf("\n");
// }
// void main()
// {
//     int ch, data;
//     while(1){
//         printf("1. Push");
//         printf("2. Pop");
//         printf("3. Display");
//         printf("4. Exit");
//         printf("Enter your choice:");
//         scanf("%d", &ch);
//         switch(ch){
//             case 1:
//                 printf("Enter data: ");
//                 scanf("%d",&data);
//                 push(data);
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 exit(0);
//             default:
//             printf("Invalid Input!");
//         }
//     }
// }

// //Wap to implement queue using linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *link;
// };
// struct node *front = NULL;
// struct node *rear = NULL;
// void insert(int data)
// {
//     struct node *new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = data;
//     new_node->link = NULL;
//     if(front == NULL){
//         front = new_node;
//         rear = new_node;
//         return;
//     }
//     rear->link = new_node;
//     rear = new_node;
// }
// void delete()
// {
//     if(front == NULL){
//         printf("UNDERFLOW\n");
//         return;
//     }
//     struct node *temp = front;
//     front = front->link;
//     free(temp);
// }
// void display()
// {
//     if(front == NULL){
//         printf("EMPTY QUEUE\n");
//         return;
//     }
//     struct node *temp = front;
//     while(temp != NULL){
//         printf("%d ", temp->data);
//         temp = temp->link;
//     }
//     printf("\n");
// }
// int main()
// {
//     int choice, data;
//     while(1)
//     {
//         printf("1. Insert\n");
//         printf("2. Delete\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch(choice)
//         {
//             case 1:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 insert(data);
//                 break;
//             case 2:
//                 delete();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 exit(0);
//             default:
//                 printf("Invalid choice\n");
//         }
//     }
//     return 0;
// }



//wap a program to transpose a sparse matrix

#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d", &m, &n);
    int count = 0;
    printf("Enter the number of non-zero elements: ");
    scanf("%d", &count);
    int a[count][3];
    printf("Enter the elements of matrix (row, column, value): \n");
    for(int i = 0; i < count; i++){
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }
    int b[count][3];
    int k = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < count; j++){
            if(a[j][1] == i){
                b[k][0] = a[j][1];
                b[k][1] = a[j][0];
                b[k][2] = a[j][2];
                k++;
            }
        }
    }
    printf("Transpose of matrix: \n");
    for(int i = 0; i < count; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
