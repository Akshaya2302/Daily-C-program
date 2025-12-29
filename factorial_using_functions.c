#include<stdio.h>
int factorial(int n)
{
	int i;
	int result=1;
	for(i=1;i<=n;i++)
	{
		result = result*i;
	}
	return result;
}

int main()
{
	int n,result;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	result = factorial(n);
	
	printf("The Factorial of %d is %d\n",n,result);
	
	return 0;
}
