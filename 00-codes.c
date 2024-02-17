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
//     printf("%p ", *ptr[0]);
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



// // WAP TO DISPLAY LARGEST SUM OF HOUR GLASS IN A MATRIX
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a[6][6],sum=0,range=-63;
//     for(int i=0; i<6;i++){
//         for(int j=0; j<6;j++){
//             a[i][j] = rand()%9;
//         }
//     }
//     printf("Array: ");
//     for(int i=0; i<6;i++){
//         printf("\n");
//         for(int j=0; j<6;j++){
//             printf("%d ",a[i][j]);
//         }
//     }
//     for(int i=0; i<=3;i++){
//         for(int j=0; j<=3;j++){
//             sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
//             if(sum>range){
//                 range=sum;
//             }
//         }
//     }
//     printf("\nLargest sum of hour glass: %d",range);
// }