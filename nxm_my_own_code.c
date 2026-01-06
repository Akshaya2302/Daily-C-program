#include<stdio.h>
int main()
{
	int rowA,colA,rowB,colB;
	
	printf("\n===MATRIX MULTIPLICATION===\n");
	printf("Enter the dimensions of MATRIX A :\n");
	scanf("%d %d",&rowA,&colA);
	
	printf("Enter the dimensions of MATRIX B :\n");
	scanf("%d %d",&rowB,&colB);
	
	if(colA==rowB)
	{
		printf("Matrix Multiplication is POSSIBLE..\n");
	}
	else
	{
		printf("Matrix Multiplication is NOT POSSIBLE...\n");
	}
	return 0; 
}
