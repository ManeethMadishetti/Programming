#include<stdio.h>
#include<stdlib.h>

void insertion(int a[],int n)
{
	int temp,j;
	for(int i=1;i<n;i++)
	{
		temp=a[i];
		for( j=i;j>0 && a[j-1]>temp;j--)
		{
				a[j]=a[j-1];
		}
		a[j]=temp;
		
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
	
	insertion(arr,n);
	
	printf("\nThe Array After Sorting:");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
}