#include<stdio.h>
int main()
{
	char str[100],destination[100];
	int i,v=0;
	
	printf("Enter the Word : ");
	scanf("%[^\n]",str);
	
	for(i=0;str[i]!='\0';i++)
	destination[i]= str[i];
	{
	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i] =='U')
	{
		v++;
	}
}

    destination =='\0';
    printf("The copied destination is :%s\n",destination);
	printf("The Number Of vowels are :%d\n",v);

	return 0;
}
