#include<stdio.h>
int main()
{
	int i,j,k,rowA,colA,rowB,colB;
	int A[10][10],B[10][10],C[10][10];
	
	printf("Enter the dimensions of Matrix A : ");
	scanf("%d %d",&rowA,&colA);
	
	printf("Enter the dimensions of Matrix B : ");
	scanf("%d %d",&rowB,&colB);
	
	if(colA!=rowB)
	{
		printf("Error!!!");
		printf("Matrix multiplication is NOT possible...");
	}
	
	printf("The elements of Matrix A : ");
	for(i=0;i<rowA;i++){
		for(j=0;j<colA;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("The elements of Matrix B : ");
	for(i=0;i<rowB;i++){
		for(j=0;j<colB;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<rowA;i++){
		for(j=0;j<colB;j++){
			C[i][j]=0;
		}
	}
	for(i=0;i<rowA;i++){
		for(j=0;j<colB;j++){
			for(k=0;k<colA;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	printf("The resulted matrix C = A*B:\n");
	for(i=0;i<rowA;i++){
		for(j=0;j<colB;j++){
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
