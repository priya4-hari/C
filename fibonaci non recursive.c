#include<stdio.h>
int fib(int);
void main()
{
	int val,n;
	printf("enter no of terms:");
	scanf("%d",&n);
	for(val=1;val<=n;val++)
	{
		printf("%d",fib(val));
	}
}
int fib(int val)
{
	int current=1;
	int old=1;
	int older=1;
	val-=2;
	while(val>0)
	{
		current=old+older;
		older=old;
		old=current;
		--val;
	}
	return current;
}
