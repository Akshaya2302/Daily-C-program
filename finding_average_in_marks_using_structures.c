#include<stdio.h>
struct student
{
	int roll_no;
	float marks;
	
};

int main()
{
	int n,i,total=0,average;
	
	printf("Enter the number of students : ");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the Roll Number and marks for a student : ",i+1);
		scanf("%d %f",&s[i].roll_no,&s[i].marks);
		
		total+=s[i].marks;
	}
	
	average = total/n;
	
	for(i=0;i<n;i++)
	{
		if(s[i].marks>average)
		{
			printf("\nStudents above average..\n");
			printf("Roll No: %d,Marks:%f\n",s[i].roll_no,s[i].marks);
		}
	}
	for(i=0;i<n;i++)
	{
		if(s[i].marks<average)
		{
			printf("\nStudents below average..\n");
			printf("Roll No: %d,Marks:%f\n",s[i].roll_no,s[i].marks);
		}
	}
	return 0;
}
