#include<stdio.h>

float areacircle(float r)

	{
		return 3.14*r*r;
	}

int main()
{
	float r,area;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	
	area = areacircle(r);
	
	printf("The area of circle is :%f\n",area);
	
	return 0;
}

