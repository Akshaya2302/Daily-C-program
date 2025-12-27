#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}

int main()
{
	int a,b,sum;
	printf("Enter the values of a and b:");
	scanf("%d%d",&a,&b);
	
	sum = add(a,b);
	printf("The sum is : %d\n",sum);
	
	return 0;
}
