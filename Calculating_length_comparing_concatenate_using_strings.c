#include<stdio.h>
int string_length(char str[])
{
	int len = 0;
	
	while(str[len]!='\0')
	{
		len++;
	}
	return len;
}
int string_compare(char str1[],char str2[])
{
	int i=0;
	
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			return 0;
		}
		i++;
	}
	while(str1[i]=='\0' && str2[i]=='\0')
	{
		return 1;
	}
	return 0;
}
void string_concat(char str1[],char str2[],char result[])
{
	int i=0,j=0;
	
	while(str1[i]!='\0')
	{
		result[j]=str1[i];
		i++;
		j++;
	}
	i=0;
	while(str2[i]!='\0')
	{
		result[j]=str2[i];
		i++;
		j++;
	}
	result[j] = '\0';
}
int main()
{
	char str1[100],str2[100],result[100];
	
	printf("Enter the first string : ");
	scanf("%s",str1);
	
	printf("Enter the second string : ");
	scanf("%s",str2);
	
	printf("Length of first string is '%s': %d\n",str1,string_length(str1));
	printf("Length of second string is '%s': %d\n",str2,string_length(str2));
	
	if(string_compare(str1,str2))
	{
		printf("Strings are equal...\n");
	}
	else
	{
		printf("Strings are not equal...\n");
	}
	
	string_concat(str1,str2,result);
	
	printf("Concatenated string is :%s\n",result);
	
	return 0;
}

