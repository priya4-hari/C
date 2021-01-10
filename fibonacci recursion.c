#include<stdio.h>
int fib(int);
void main()
{
	int n,i;
	printf("enter no of terms:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("\nterms doesnot given");
		exit(1);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\t",fib(i));
	}
}
int fib(int x)
{
	if(x<=2)r
		return 1;
		else
			return (fib(x-1)+fib(x-2));
}
