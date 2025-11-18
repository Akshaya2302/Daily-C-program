#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter the values of three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>=n2)
	{
		if(n1>=n3)
		{
		printf("n1 is largest number:%d\n",n1);	
		}
		else
		{
			printf("n3 is largest number:%d\n",n3);
		}
	}
		else
		{
		if(n2>=n3)
		{
			printf("n2 is largest number:%d\n",n2);
		}
		else
		
		{
			printf("n3 is largest number:%d\n",n3);
		}
	
	}
	return 0;
}
