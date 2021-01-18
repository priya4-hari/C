#include<stdio.h>
int search(int [],int,int);
void main()
{
	int i,j,n,p,k,a[30],t;
	printf("enter the no of ele:");
	scanf("%d",&n);
	printf("enter array ele:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
	printf("enter key:");
	scanf("%d",&k);
	p=search(a,k,n);
	if(p==-1)
		printf("not found");
		else
			printf("found in %d",p+1);
}
int search(int arr[],int k,int n)
{
	int low,high,mid;
	 low=0;
	 high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==k)
		{
			return mid;
		}
		else if(arr[mid]<k)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}

