#include<stdio.h>
int main()
{
	int n = 20,i;
	int a = 0;
	int b = 1;
	int next;
	
	printf("The 20 fibonacci numbers are: \n");
	
		for(i=1;i<=n;i++)
		{
		printf("%d ", a);
		
		next = a + b;
		a = b;
		b = next;
        }
   
	return 0;
}
