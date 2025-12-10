#include<stdio.h>
int main()
{
	int a = 10;
	int *p;
	p = &a; // p has the address of a.....
	
	printf("The value at a = %d\n",a);
	printf("The address of a = %p\n",p);
	printf("The value pointed by p = %d\n",*p);
}
