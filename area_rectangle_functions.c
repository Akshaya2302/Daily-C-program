#include<stdio.h>

float arearectangle(float l,float b)

	{
		return l*b;
	}

int main()
{
	float l,b,area;
	printf("Enter the length and breadth of a rectangle:");
	scanf("%f%f",&l,&b);
	
	area = arearectangle(l,b);
	
	printf("The area of rectangle is :%.2f\n",area);
	
	return 0;
}

