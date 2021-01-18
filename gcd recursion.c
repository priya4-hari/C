#include<stdio.h>
int gcd(int,int);
void main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
}
int gcd(int x,int y)
{
	int r;
	r=x%y;
	if(r==0)
	{
		return y;
	}
	else
	{
		return gcd(y,r);
	}
}r
