#include<stdio.h>
int checkEvenOdd(int n)
{
	if(n%2==0){
		printf("it is a Even number");
	}
	else
	{
		printf("Its is a odd number");
	}
	return 0;
}



	int main()
	{
		int n;
		printf("Enter the Number:");
		scanf("%d",&n);
		
		checkEvenOdd(n);
		return 0;
	}


