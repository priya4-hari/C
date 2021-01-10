#include<stdio.h>
int linear(int [],int,int);
void main()
{
	int a[20],p,k,n,i=10;
	printf("enter elements:");
	for(n=0;n<10;n++)
	{
		scanf("%d",&a[n]);
	}
	printf("enter key element:");
	scanf("%d",&k);
	p=linear(a,k,i);
	if(p==-1)
		printf("not found");
		else
			printf("the element %d is present ",p);
	
}
int linear(int arr[],int k,int i)
{
	int j;
	for(j=0;j<i;j++)
	{
		if(arr[j]==k)
		{
			return j;
		}
	}
	return -1;
}
