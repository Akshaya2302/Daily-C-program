#include<stdio.h>
int main()
{
	int score;
	
	printf("Enter the score of a student(0-100):");
	scanf("%d",&score);
	
	if(score>=90 && score<=100)
	{
		printf("Grade : A\n");
	}
		else if(score>=80 && score<=89)
		{
			printf("Grade : B\n");
		}
		else if(score>=70 && score<=79)
		
		{
			printf("Grade : C\n");
		}
		else if(score>=60 && score<=69)
		
		{
			printf("Grade : D\n");
		}
		else if(score>=0 && score<=59)
		{
			printf("Grade : F\n");
		}
		
		else
		{
			printf("Invalid score!!!");
		}
		return 0;
}
