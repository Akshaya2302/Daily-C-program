#include<stdio.h>
void swap(int *x,int *y)  //void swap(int x,int y) // This is call by reference

{
	int temp;
	temp = *x; //temp = x;	
	*x = *y; //x = y;
	*y = temp; //y = temp;
}

int main()
{
	int a = 10,b = 20;
	
	printf("Before swap : a = %d,b = %d\n",a,b);
	
	//swap(a,b);
	swap(&a,&b); //passing the address
	
	printf("After swap: a = %d,b = %d\n",a,b);
	
	return 0;
}
