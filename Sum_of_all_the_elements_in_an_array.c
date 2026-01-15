#include<stdio.h>
int main()
{
	int i,n,arr[100],sum=0;
	int *ptr;
	
	printf("Enter the number of elements :");
	scanf("%d",&n);
	
	printf("The %d elements are :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	ptr = arr;
	
	for(i=0;i<n;i++)
	{
		sum+=*ptr;
		ptr++;
	}
	printf("The Sum of all the elements in an array is :%d\n",sum);
	return 0;
}
