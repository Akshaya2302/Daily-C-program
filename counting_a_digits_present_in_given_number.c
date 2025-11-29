#include<stdio.h>

int main()

{

	int num,count = 0;

	

	printf("Enter an number:");

	scanf("%d",&num);

	

	if(num==0)

	count = 1;

	else

	{

		while(num>0)

		{

			num=num/10;

			count++;

		}

	}

	printf("There are %d in the given number.\n",count);

	return 0;

}
