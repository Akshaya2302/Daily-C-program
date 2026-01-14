#include<stdio.h>
int countdigit(int num,int digit)
{
	if(num==0)
	{
		return 0;
	}
	int lastdigit = num%10;
	if(lastdigit==digit)
	{
		return 1 + countdigit(num/10,digit);
	}
	else
	{
		return  + countdigit(num/10,digit);
	}
}
int main()
{
	int result,num,digit;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	printf("Enter the digit to be count : ");
	scanf("%d",&digit);
	
	result = countdigit(num,digit);
	
	printf("The digit %d appears %d times\n",digit,result);
	
	return 0;
}
