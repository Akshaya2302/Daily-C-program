#include<stdio.h>
int sumofdigits(int n)
{
	if(n==0)
	{
		return 0;
	}
	
	return n%10+sumofdigits(n/10);	
}

int main()
{
	int sum = 0;
	int n,result;
	printf("Enter the number:");
	scanf("%d",&n);
	
	result = sumofdigits(n);
	
	printf("The sum is : %d\n",result);
	
	return 0;
}
