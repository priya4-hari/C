#include<stdio.h>
int sort(int [],int,int);
int swap(int [],int,int);
void main()
{
	int n,a[20],i;
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("the array elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,0,n-1);
	printf("the order elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int sort(int a[],int first,int last)
{
	if(first<last)
	{
	int pivot=a[first];
	int i=first;
	int j=last;
	while(i<j)
	{
		while((a[i]<=pivot)&&(i<last))
			i++;
		while((a[j]>=pivot)&&(j>first))
			j--;
			if(i<j)
				swap(a,i,j);
				}
				swap(a,first,j);
				sort(a,first,j-1);
				sort(a,j+1,last);	
				}
			}
int swap(int a[],int i,int j)
{
	int t;
	t=a[i];
	a[i]=a[j];
	a[j]=t;
}
