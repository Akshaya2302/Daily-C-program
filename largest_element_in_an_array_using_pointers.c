#include<stdio.h>
int findmax(int *arr,int n)
{
	int max = *arr;
	int i;
	for(i=0;i<n;i++)
	{
		if(*(arr+i)>max)
		{
			max = *(arr+i);
		}
	}
	return max;
}

int main()

{
	int arr[100],n,i,max;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	printf("The %d elements are : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max = findmax(arr,n);
	
	printf("The Largest element is :%d\n",max);
	
	return 0;
}
