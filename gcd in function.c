#include<stdio.h>
int gcd(int,int);
void main()
{
	int a,b,r;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	r=gcd(a,b);
	printf("the gcd is %d",r);
}
int gcd(int x,int y)
{
	int i,p;
	for(i=1;(i<=x)&&(i<=y);i++)
	{
		if((x%i==0)&&(y%i==0))
		{
			p=i;
		}
	}
	return p;
}
