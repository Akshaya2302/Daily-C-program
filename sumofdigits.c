#include<stdio.h>
int main()
{
	int remainder,n,sum=0;
	
	printf("Enter an integer :");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder = n%10;
	    sum += remainder;
	    n /= 10;
	}
	printf("The sum of digits is :%d",sum);
	return 0;		
}
