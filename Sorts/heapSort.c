#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
	
	int t=*a;
	*a=*b;
	*b=t;
}
void heapify(int a[],int n){
	for(int i=0;i<n;i++)
	{
		for(int j=i;j!=0;j=(j-1)/2)
		{
			if(a[(j-1)/2]<a[j])//if parent is less than child
				swap(&a[j],&a[(j-1)/2]);
		}
	}
}
void heapSort(int a[],int n)
{
	heapify(a,n);
	for(int j=n-1;j>=0;j--)
	{
		swap(&a[j],&a[0]);
		heapify(a,j);
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
	
	heapSort(arr,n);
	
	printf("\nThe Array After Sorting:");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
}