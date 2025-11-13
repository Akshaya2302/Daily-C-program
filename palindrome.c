#include<stdio.h>
int main()
{
	int num,remainder;
	int reversednumber=0;
	int originalnumber;
	
	printf("Enter the number to be reversed :");
	scanf("%d",&num);
	
	originalnumber=num;
	
	while(num>0)
	{
		
		remainder = num%10;
		reversednumber = reversednumber*10+remainder;
		num = num/10;
	}
	
	if(originalnumber==reversednumber)
	{
		printf("It is a palindrome number!!!\n");
		
	}
	else
	{
		printf("It is not a palindrome number.....\n");
	}
	return 0;
}
