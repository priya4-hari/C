#include<stdio.h>
int sort(int [],int);
void main()
{
	int n,i,a[20];
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("the order elements:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int sort(int arr[],int n)
{
	int i,t,j;
	for(i=1;i<n;i++)
	{
		t=arr[i];
		j=i-1;
		while((j>=0)&&arr[j]>t)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=t;
	}
}
