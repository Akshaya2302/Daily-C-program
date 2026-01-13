#include<stdio.h>
int main()
{
	char str[1000];
	int i,in_word=0,word_count=0;
	
	printf("Enter the word : ");
	scanf("%[^\n]",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			in_word=0;
		}
		else if(in_word==0)
		{
			word_count++;
			in_word=1;
		}
	}
	
	printf("The number of words are : %d\n",word_count);
	return 0;
}
