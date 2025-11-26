#include<stdio.h>
int main()
{
	int mat[100][100],row,col,rowsum,colsum,i,j;
	
	printf("Enter the row and col of the matrix:");
	scanf("%d%d",&row,&col);
	
	printf("Enter the matrix element:");
	{
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("The Row Sum is:\n");
	
		for(i=0;i<row;i++)
		{
			rowsum=0;
			for(j=0;j<col;j++)
			{
				rowsum+=mat[i][j];
			}
			printf("The %d row sum is %d:",i,rowsum);
		}
			printf("The column Sum is:\n");
	
		for(j=0;j<row;j++)
		{
			colsum=0;
			for(i=0;i<row;i++)
			{
				colsum+=mat[i][j];
			}
			printf("The %d col sum is %d:",j,colsum);
		}
	}
	
	return 0;	
	
}
