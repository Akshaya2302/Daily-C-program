#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number between (1 and 10):");
	scanf("%d",&num);
	
	while(num!=0)
	{
		if(num<1 || num>10)
		{
			printf("INVALID INPUT!!\n");
		}
		else
		{
			printf("You entered a valid number...\n");
		}
		
		printf("Enter a new number(0 or exit):\n");
		scanf("%d",&num);
	}
	printf("Thanks...");
	return 0;
}
