 #include<stdio.h>
 void mergesort(int [],int);
 void merge(int [],int [],int,int [],int);
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
	 mergesort(a,n);
	 printf("the array elements are:");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",a[i]);
	 }
 }
 void mergesort(int array[], int n) 
 { 
     int j,n1,n2,arr1[n],arr2[n];    
	     if (n<=1)return n;  
		    n1=n/2; 
			    n2 = n - n1;    
				 for(j = 0; j<n1; j++)     
				     arr1[j]= array[j];    
					  for(j = 0; j<n2; j++)     
					     arr2[j]= array[j+n1];   
						  mergesort(arr1, n1); 
						      mergesort(arr2, n2);   
							    merge(array, arr1, n1, arr2, n2); 
								 }
 void merge (int array[], int arr1[], int n1,                int arr2[], int n2) 
 {
      int j, p=0, p1=0,p2=0;   
						      while (p1 < n1 && p2 < n2) 
							      {    
								     if(arr1[p1] < arr2[p2])     
									     array [p++] = arr1[p1++];   
										     else
											          array[p++] = arr2[p2++];
													        }
											    while (p1 < n1)       
												array [p++] = arr1[p1++];   
												  while (p2 < n2)   
												      array[p++] = arr2[p2++];   
													    printf("merged array is [");  
														  for(j=0; j<n1+n2; j++)      
														   printf("%d", array[j]);   
														     printf("]\n");    
															 } 
