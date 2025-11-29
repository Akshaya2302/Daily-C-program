#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter An Year:");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("It is a LEAP year\n",year);
	}
	else
	{
		printf("It is not a LEAP year\n",year);
	}
	return 0;
}
