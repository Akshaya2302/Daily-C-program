#include<stdio.h>
int main()
{
	char word[100],temp;
	int i,j,length =0;
	
	printf("Enter the word to be reversed :");
	scanf("%[^\n]",word);
	
	while(word[length]!='\0')
	{
		length++;
	}
	for(i=0,j=length-1;i<j;i++,j--)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	
	printf("Reversed Word : %s\n",word);
	
	return 0;
}
