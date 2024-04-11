// // WAP TO INPUT NAME, ROLL NO AND MARKS, THEN PRINT THE PERCENTAGE OF STUDENTS IN A CLASS OF 60.
// #include<stdio.h>
// void main()
// {
//     int i,j,rollno,total,per;
//     char name[50];
//     int marks[5];
//     for(i=0;i<60;i++){
//         printf("Enter name of student %d: ",i+1);
//         scanf("%s", name);
//         printf("Enter roll no of student %d: ",i+1);
//         scanf("%d", &rollno);
//         printf("\nMARKS OF STUDENT %d\n", i+1);
//         for(j=0;j<5;j++){
//             printf("Enter marks of subject %d: ",j+1);
//             scanf("%d", &marks[j]);
//         }
//         total =0;
//         per = 0;
//         for(j=0;j<5;j++){
//             total = total+marks[j];
//         }
//         per = total/5;
//         printf("\nPercentage of student %d is %d\n", i+1,per);
//     }
// }



// // WAP TO SORT THE ELEMENTS OF THE ARRAY AND ADD A VALUE IN IT.
// #include<stdio.h>
// void main()
// {
//     int a[50],n,i,j,temp;
//     printf("Enter the length of array: ");
//     scanf("%d", &n);
//     for(i=0; i<n; i++){
//         printf("Enter elements: ");
//         scanf("%d", &a[i]);
//     }
//     for(i=0; i<n; i++){
//         for(j=i+1; j<n; j++){
//             if(a[i]>a[j]){
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("\nSorted array: ");
//     for(i=0; i<n; i++){
//         printf("%d ",a[i]);
//     }
//     printf("\nEnter the value to be inserted: \n");
//     scanf("%d",&a[n]);
//     printf("\nFinal array: ");
//     for(i=0; i<n+1; i++){
//         printf("%d ",a[i]);
//     }
// }



// // WAP TO CREATE A FILE
// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     char file[50];
//     printf("\nEnter file name: ");
//     scanf("%s", file);
//     ptr = fopen(file,"a");
//     if (ptr == NULL){
//         printf("Can't create the file\n");
//         return 1;
//     }
//     else{
//         printf("File created successfully!");
//         return 0;
//     }
// }



// // WAP TO IMPLEMENT ACKERMANN FUNCTION
// #include<stdio.h>
// int ackermann(int m,int n)
// {
//     if(m==0){
//         printf("I am Here");
//         return(n+1);
//     }
//     else if(m>0 && n==0){
//         printf("I am in return 2");
//         return ackermann(m-1,1);
//     }
//     else{
//         printf("I am in return 3");
//         return ackermann(m-1,A(m,n-1));
//     }
// }
// void main()
// {
//     int m,n,sol;
//     printf("Enter m &n");
//     scanf("%d%d",&m,&n);
//     sol = ackermann(m,n);
//     printf("sol");
// }



// // WAP TO CHECK WHETHER THE STRING IS PALINDROME OR NOT
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[50]="mom";
//     char b[50];
//     strcpy(b,a);
//     strrev(b);
//     if ((strcmp(a,b)==0)){
//         printf("String is palindrome");
//     }
//     else{
//         printf("String is not palindrome");
//     }
// }



// // WAP TO IMPLEMENT POINTERS
// #include<stdio.h>
// void main(){
// int a = 10;
// int *ptr;
// ptr = NULL;
// *ptr = 1;
// printf("%d\n",a);
// printf("%d\n", *ptr); //10
// printf("%d\n", ptr); //garbage value
// printf("%p\n", a); //address of a
// printf("%p\n", *ptr); //address of a
// printf("%p\n", ptr); //address of ptr
// }



// // WAP TO IMPLEMENT POINTERS 2
// #include<stdio.h>
// void main()
// {
//     int a[] = {1,2,3,4,5};
//     int i=0,*p;
//     while(i<5){
//         p=&a[i];
//         printf("Address = %p\n", p);
//         printf("Value of element = %d\n", *p);
//         i++;
//     }
// }



// // ARMSTRONG NUMBER USING RECURSION
// #include<stdio.h>
// #include<math.h>
// int c = 0;
// static int s = 0;
// int arm(int n)
// {
//     int r;
//     if(n>0){
//         r = n%10;
//         s = s+(pow(r,c));
//         n = n/10;
//         return arm(n);
//     }
//     else{
//         return s;
//     }
// }
// void main()
// {
//     int no,t,res;
//     printf("Enter a number: ");
//     scanf("%d", &no);
//     t=no;
//     while(t>0){
//         c+=1;
//         t=t/10;
//     }
//     t=no;
//     res = arm(no);
//     if (res==no){
//         printf("Armstrong number");
//     }
//     else{
//         printf("Not an armstrong number");
//     }
// }



// // POINTER TO AN ARRAY
// #include<stdio.h>
// void main()
// {
//     int arr[5]={1,2,3,4,5};
//     int (*ptr)[5] = &arr;
//     printf("%d ", (*ptr)[2]);
// }



// // ARRAY OF POINTERS
// #include<stdio.h>
// void main()
// {
//     int arr[5]={1,2,3,4,5};
//     int *ptr[10];
//     ptr[0] = arr;
//     ptr[1] = arr + 1;
//     printf("%u ", *ptr[0]);
//     printf("%d ", *ptr[1]);
// }



// // WAP TO IMPLEMENT A MACRO
// #include<stdio.h>
// #define PI (3.14)
// void main()
// {
//     float area,r;
//     printf("Enter radius of the circle: ");
//     scanf("%f", &r);
//     area = PI*r*r;
//     printf("%f", area);
// }



// // USING VOID POINTER
// #include<stdio.h>
// void main()
// {
//     int a = 128;
//     char b = 'w';
//     void *ptr;
//     ptr = &a;
//     printf("%d", *(int*)ptr);
//     ptr = &b;
//     printf("%c", *(int*)ptr);
// }



// // OUTPUT
// #include<stdio.h>
// void main()
// {
//     int a = 1;
//     printf("%d %d %d", a,++a,a++);
// }



// // OUTPUT
// #include<stdio.h>
// void main()
// {
//     int c=0;
//     for(printf("I");printf("Love");printf("Forever")){
//         printf("You");
//         c++;
//         if (c==5){
//             break;
//         }

//     }
// }



// // REVERSING AN ARRAY
// #include<stdio.h>
// void main()
// {
//     int n,temp;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements: ");
//     for(int i=0; i<n; i++){
//         printf("Element %d: ",i);
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0; i<n/2; i++){
//         int k = n-1;
//         temp=arr[i];
//         arr[i]=arr[k-i];
//         arr[k-i]=temp;
//     }
//     printf("Reversed Array: ");
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
// }



// // PRIME NUMBER 1 TO 1000
// #include<stdio.h>
// void main()
// {
//     int n,i,c;
//     for(n=1;n<=1000;n++){
//         c=0;
//         for(i=1; i<=n; i++){
//             if(n%i==0){
//                 c++;
//             }
//         }
//         if(c==2){
//             printf("%d is a prime number.\n", n);
//         }
//     }
// }


// #include <stdio.h>   
// int stack[100],i,j,choice=0,n,top=-1;  
// void push();  
// void pop();  
// void show();  
// void main ()  
// {  
      
//     printf("Enter the number of elements in the stack ");   
//     scanf("%d",&n);  
//     printf("*********Stack operations using array*********");  
  
// printf("\n----------------------------------------------\n");  
//     while(choice != 4)  
//     {  
//         printf("Chose one from the below options...\n");  
//         printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
//         printf("\n Enter your choice \n");        
//         scanf("%d",&choice);  
//         switch(choice)  
//         {  
//             case 1:  
//             {   
//                 push();  
//                 break;  
//             }  
//             case 2:  
//             {  
//                 pop();  
//                 break;  
//             }  
//             case 3:  
//             {  
//                 show();  
//                 break;  
//             }  
//             case 4:   
//             {  
//                 printf("Exiting....");  
//                 break;   
//             }  
//             default:  
//             {  
//                 printf("Please Enter valid choice ");  
//             }   
//         };  
//     }  
// }   
  
// void push ()  
// {  
//     int val;      
//     if (top == n )   
//     printf("\n Overflow");   
//     else   
//     {  
//         printf("Enter the value?");  
//         scanf("%d",&val);         
//         top = top +1;   
//         stack[top] = val;   
//     }   
// }   
  
// void pop ()   
// {   
//     if(top == -1)   
//     printf("Underflow");  
//     else  
//     top = top -1;   
// }   
// void show()  
// {  
//     for (i=top;i>=0;i--)  
//     {  
//         printf("%d\n",stack[i]);  
//     }  
//     if(top == -1)   
//     {  
//         printf("Stack is empty");  
//     }  
// }


// #include<stdio.h>
// void main()
// {
//     int a[5], n=5;
//     int f=-1,r=-1;
//     if(f==r==-1)

// }

// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
// int *ptr = (int *)malloc(5 * sizeof(int));
// if (ptr != NULL) {
//     *ptr = 10; // Accessing the first element of the "array"
//     *(ptr+1)= 20; // Accessing the second element
//     // and so on...
// }
// printf("%d",*ptr);
// printf("%d",*(ptr+1));
// }

// #include<stdio.h>
// int add(int *p1, int *p2)
// {
//     return *p1+*p2;
// }
// void main()
// {
//     int n1=10, n2=20;
//     printf("%d",add(&n1,&n2));
// }