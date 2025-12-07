#include<stdio.h>
int main(){
	int a[10];
	int i;
	printf("enter the ten number: ");
	for(i=0;i<10;i++)
	{
	    scanf("%d",&a[i]);	
	} 
	for(i=0;i<10;i++)
	{
		if(a[i]%2 != 0)
		{
			printf("%d is odd number\n",a[i]);
		}
	}
	return 0;
}
