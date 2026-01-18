#include<stdio.h>

struct employee
{
	int id;
	char name[20];
	float salary;
};

int main()
{
	int i,n,max_index=0;
	
	printf("The number of employees : ");
	scanf("%d",&n);
	
	struct employee emp[n];
	for(i=0;i<n;i++){
	
	printf("Enter the ID of a employee : ");
	scanf("%d",&emp[i].id);
	printf("Enter the NAME of a employee : ");
	scanf("%s",emp[i].name);
	printf("Enter the SALARY of a employee : ");
	scanf("%f",&emp[i].salary);

	if(emp[i].salary>emp[max_index].salary)
	{
		max_index=i;
	}
}
	printf("\nEMPLOYEE WITH HIGHEST SALARY...\n");
	printf("ID : %d\n",emp[max_index].id);
	printf("NAME : %s\n",emp[max_index].name);
	printf("SALARY : %f\n",emp[max_index].salary);
	
	return 0;
	
}
