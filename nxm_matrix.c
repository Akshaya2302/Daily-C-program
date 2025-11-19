//Write a program to print to accept the input as nxm matrix and display.
//a. Elements of the matrix.
//b. The diagonal elements of the matrix.
//c. Transpose of a matrix.

//a. Elements of the matrix
#include<stdio.h>
int main()

{
	int row,col,mat[100][100],i,j;
	
	printf("Enter how many rows and cols of the martix:");
	scanf("%d%d",&row,&col);
	
	printf("Enter the values into the matrix:");
	
	for(i=0;i<row;i++)
	{
	 for(j=0;j<col;j++)	
	  {
		scanf("%d",&mat[i][j]);
	  }
	}
	
	printf("The matrix elements are:\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",mat[i][j]);
			}
			printf("\n");
		}
		printf("The diagonal elemnets are:");
	
	if(row==col)
	{
		for(i=0;i<row;i++)
		{
			printf("%d\t",mat[i][i]);
		}
	}
	else
	{
		printf("The given matrix is not  square matrix,no diagonal element\n");
	}
	
	printf("\nThe transpose elements are:\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",mat[j][i]);
			}
				printf("\n");
		}
return 0; 
}


	
	
	

