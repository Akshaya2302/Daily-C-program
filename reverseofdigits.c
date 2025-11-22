#include<stdio.h>
int main()
{
	int reversed,number;
	
	printf("Enter the two digit number to be reversed:");
	scanf("%d",&number);
	
	if(number<10 || number>99)
	{
		printf("ERROR: its not a two digit number..");
		return 1;
	}
	
	int lastdigit = number%10;
	int firstdigit = number/10;
	
	reversed = (lastdigit*10) + firstdigit;
	printf("The reversed number :%d\n",reversed);
	return 0;
   
}
