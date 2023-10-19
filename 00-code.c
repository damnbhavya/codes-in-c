// #include<stdio.h>
// void main()
// {
//     int x,y;
//     x = 5;
//     y = x++;
//     printf("%d%d",x,y);
// }

// #include<stdio.h>
// void main()
// {
//     int a,b,c,d,e;
//     a=0, b=-1, c=1, d=0;
//     e = ++a || (++b && --c) || ++d;
//     printf("%d %d %d %d %d",a,b,c,d,e);
// }

// #include<stdio.h>
// int main()
// {
//    int a,b,c,d,e,f;
//     a=-1, b=1, c=1, d=4, e=0;
//     f = (--a && b-- && d++) || (--e && ++c);
//     printf("%d %d %d %d %d %d",a,b,c,d,e,f);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=0, n, arr[20];
//     printf("Enter the elements: ");
//     scanf("%d", &n);

//     for(i=0; i<n; i++)
//     {
//         arr[i]=i+1;
//         // printf("\n arr[%d]= ",i);
//         // scanf("%d", arr[i]);
//     }
//     printf("\nThe array elements are\n");
//     for(i=0; i<n; i++)
//     {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// void main()
// {
//     int n,i=0,sum=0,n2;
//     printf("Enter size of array:" );
//     scanf("%d", &n);
//     int a[n];
//     for(i=0; i<n; i++)
//     {
//         printf("%d. Enter values of the array: ", i+1);
//         scanf("%d",&n2);
//         a[i]=n2;
//         sum = sum + a[i];
//     }
//     printf("Sum of elements in the array is: %d", sum);
// }
