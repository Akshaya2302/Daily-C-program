#include<stdio.h>
int calculatedata(int arr[],int size,float *avg)
{
	int sum =0,i;
	for(i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	*avg = (float)sum/size;
	
	return sum;
}
int main()
{
	int n,arr[100],totalsum,i;
	float average;
	printf("Enter the number of elements:");
	scanf("%d", &n);
	
	printf("The %d integers are:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	totalsum = calculatedata(arr,n,&average);
	
	printf("\nThe TOTAL SUM is : %d\n",totalsum);
	printf("\nThe AVERAGE is : %f\n",average);
	
	return 0;
}
