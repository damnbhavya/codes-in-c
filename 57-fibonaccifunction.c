#include <stdio.h>
void fibonacci()
{
	int n, nx, f = 0, s = 1;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("Fbionacchi Series: %d %d ", f, s);
	for (int i = 2; i < n; i++)
	{
		nx = f + s;
		printf("%d ", nx);
		f = s;
		s = nx;
	}
}
void factorial()
{
	int n, f = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		f = f * i;
	}
	printf("The factorial of %d is %d\n", n, f);
}
int main()
{
	int ch;
	printf("Main Menu ->\n");
	printf("1. Fibonacci series\n");
	printf("2. Factorial of a number\n");
	printf("Enter the action: \n");
	scanf("%d",&ch);
	if(ch == 1)
		fibonacci();
	else if(ch == 2)
		factorial();
	else
		printf("Invalid Input!");
}
