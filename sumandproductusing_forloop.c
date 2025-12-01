#include<stdio.h>
int main()
{
	int sum = 0;
	int i;

	{
		for(i=1;i<=5;i++)
		sum =sum+i;
	}
	printf("The sum is:%d\n",sum);
	return 0;
}
//product
#include<stdio.h>
int main()
{
	int product = 1;
	int i;

	{
		for(i=1;i<=5;i++)
		product =product*i;
	}
	printf("The product is:%d\n",product);
	return 0;
}
