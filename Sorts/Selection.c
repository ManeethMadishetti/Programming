#include<stdio.h>
#include<stdlib.h>

void selection(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int min=a[i],t=i,j;
		for(j=i;j<n;j++)
		{
			
			if(min>a[j])
			{
				min=a[j];
				t=j;
			}
		}
		if(t!=i)
		{
			int temp=a[t];
			a[t]=a[i];
			a[i]=temp;
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
	
	selection(arr,n);
	
	printf("\nThe Array After Sorting:");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
}