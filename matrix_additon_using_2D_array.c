#include<stdio.h>
int main()
{
	int row,col,i,j;
    int A[10][10],B[10][10],C[10][10];
    
    printf("Enter the number of rows and cols : ");
    scanf("%d %d",&row,&col);
    
	printf("Enter the elements of MATRIX A :");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			//printf("A[%d][%d]",i,j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter the elements of MATRIX B :");
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			//printf("B[%d][%d]",i,j);
			scanf("%d", &B[i][j]);
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	printf("THE MATRIX ADDTION...\n");
	printf("Matrix C = A + B:\n",C[i][j]);	
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		printf("%d\t", C[i][j]);
		}
	}
	printf("\n");
	
	return 0;
	
}
