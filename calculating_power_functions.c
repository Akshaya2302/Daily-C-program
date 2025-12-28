#include<stdio.h>
int calpower(int base,int exp)
{
	int i;
	int result=1;
	for(i=1;i<=exp;i++)
	{
		result = result*base;
	}
	return result;
}

int main()
{
	int base,exp,result;
	
	printf("Enter the base and exp numbers:");
	scanf("%d%d",&base,&exp);
	
	result = calpower(base,exp);
	
	printf("The power of %d\n",result);
	
	return 0;
}
