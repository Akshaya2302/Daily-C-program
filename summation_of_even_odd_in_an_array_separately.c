#include<stdio.h>
int main()
{
	int arr[100];
	int evensum = 0, oddsum = 0,n,i;
	
	printf("Enter the number of elements(max 100):");
	scanf("%d",&n);
	
	printf("The %d integers are:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
	{
		evensum +=arr[i];
	}
	else
	{
		oddsum +=arr[i];
	}
	
	}
	
	printf("The Even Sum is:%d\n",evensum);
	printf("The Odd Sum is:%d\n",oddsum);
	
	return 0;
}
