#include<stdio.h>
#include<stdlib.h>

void bubble(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n-i-1;j++)
		{
			
			if(a[j]>a[j+1])
			{
				int min=a[j];
				a[j]=a[j+1];
				a[j+1]=min;
			}
		}
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
	
	bubble(arr,n);
	
	printf("\nThe Array After Sorting:");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
}