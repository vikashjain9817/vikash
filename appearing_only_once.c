#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int n);
void swap(int *xp, int *yp);
void main()
{
	int n,a[100000],i;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubbleSort(a,n);
	for(i=0;i<n;i=i+2)
	{
		if(a[i]!=a[i+1])
			printf("%d",a[i]);
		if(i==n-2)
			printf("%d",a[i+1]);
	}
}
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)           
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
