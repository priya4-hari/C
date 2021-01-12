#include<stdio.h>
int search(int a[],int ele,int low,int high);
void main()
{
	int a[10]={1,2,33,4,5,6,7,4,6,7};
	int n=33;
	printf("the element is present in %d",search(a,n,0,9));
}
int search(int x[ ], int k, int low, int high) 
{
	 int mid; 
	 if(low > high)  
	 return -1;
	  mid = (low + high)/2;
	  return (k==x[mid]?mid:k<x[mid]?search(x,k,low,mid-1):search(x,k,mid+1,high));
}
