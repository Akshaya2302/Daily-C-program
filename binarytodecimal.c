#include<stdio.h>
#include<math.h>
int binarytodecimal(int binary,int position)
{
	if(binary==0)
	{
		return 0;
	}
	int lastdigit = binary%10;
	
	return lastdigit*pow(2,position) + binarytodecimal(binary/10,position+1);
}
int main()
{
	int i,binary,position,result;
	
	printf("Enter the Binary code : ");
	scanf("%d",&binary);
	
	result = binarytodecimal(binary,position);
	
	printf("The Decimal Equivalent is :%d\n",result);
	
	return 0;
}
