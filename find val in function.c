#include<stdio.h>
int cal(int);
void main()
{
	int n;
	n=cal(9);
	printf("%d",n);
}
int cal(int val)
{
	return (val*(val+1))/2;
}
