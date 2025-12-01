#include<stdio.h>
int main()
{
	int reversed = 0,num,rev;
	
	printf("Enter a number to be reversed:");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rev = num%10;
		reversed = (reversed*10)+rev;
		num=num/10;
	}
	
	printf("The reversed number is:%d\n",reversed);
	return 0;
}
