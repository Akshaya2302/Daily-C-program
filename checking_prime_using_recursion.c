#include<stdio.h>
int checkprime(int n,int i)
{

	if(i>n/2)
	{
		return 1;
	}
		if(n%i==0)
		{
			return 0;
		}
		return checkprime(n,i+1);
	
}
int main()
{
	int n,result;
	
	printf("Enter the Number:");
	scanf("%d",&n);
	

	if(checkprime(n,2)==1)
	{
		printf("It is a prime number...");
	}
	else
	{
		printf("It is not a prime number..");
	}
	return 0;
}
