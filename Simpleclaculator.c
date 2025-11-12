#include<stdio.h>
int main()
{
	float n1,n2;
	float result;
	char operator;
	

	printf("Enter the operator(+,-,*,/):");
	scanf("%c",&operator);

	printf("Enter the values of n1 and n2:");
	scanf("%f%f",&n1,&n2);
	 
	switch (operator)
	{
	 
	case '+': result = n1+n2;
	printf("The result is :%f\n ",result);
	break;
	
	case '-': result = n1-n2;
	printf("The result is :%f\n",result);
	break;
	
	case '*': result = n1*n2;
	printf("The result is :%f\n",result);
	break;
	
	case '/': result = n1/n2;
	printf("The result is :%f\n",result);
	break;
	
	default :
		printf("Invalid operator");
	}
		return 0;
	
}
