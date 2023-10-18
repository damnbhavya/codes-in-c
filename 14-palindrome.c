    #include<stdio.h>
    void main()
    {
        int i, n, r, n2=0, rev=0;
        printf("Enter a number to check whether it's palindrome or not: ");
        scanf("%d", &n);
        n2 = n;
        while (n>0)
        {
            r = n%10;
            rev = rev*10 +r;
            n = n/10;
        }
        if(n2==rev)
        {
            printf("%d is a palindrome number.\n", n2);
        }
        else
        {
            printf("%d is not a palindrome number.\n", n2);
        }
    }

