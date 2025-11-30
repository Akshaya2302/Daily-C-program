#include<stdio.h>
int main()
{
	int num,product = 1,remainder;
	printf("Enter a number : ");
	scanf("%d",&num);
	

    while(num!=0)
   {
	remainder = num%10;
	product = product * remainder;
	num = num/10;
   }
   
   printf("The product of given number is:%d\n",product);
	return 0;
	
}
