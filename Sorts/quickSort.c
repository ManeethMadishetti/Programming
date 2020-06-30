#include<stdio.h>
#include<stdlib.h>


void swap(int *a,int *b)
{
	
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int a[],int start,int end)
{
	int pIndex=start;
	int pivot=a[end];
	for(int i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			swap(&a[i],&a[pIndex]);
			pIndex++;
		}
	}
	
	swap(&a[pIndex],&a[end]);
	return pIndex;
	
}

void quickSort(int a[],int start,int end)
{
	if(start<end)
	{
		int pivot=partition(a,start,end);
		quickSort(a,start,pivot-1);
		quickSort(a,pivot+1,end);
	}
			
}
int main()
{
	int n;
	printf("Enter N:");
	scanf("%d",&n);
	int arr[n];
	printf("\n Enter The %d Intergers:",n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("\nThe Array Before Sorting:");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
	quickSort(arr,0,n-1);
	
	printf("\nThe Array After Sorting:");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
}