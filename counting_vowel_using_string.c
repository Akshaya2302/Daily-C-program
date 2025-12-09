#include <stdio.h>
int main()
{
char source[100], destination[100];
int i, vowel_count = 0;
  
printf("Enter a string: ");
scanf(" %[^\n]", source);
for(i = 0; source[i] != '\0'; i++)
{
destination[i] = source[i];

if(source[i] == 'a' || source[i] == 'e' || source[i] == 'i' ||
source[i] == 'o' || source[i] == 'u' || source[i] == 'A' ||
source[i] == 'E' || source[i] == 'I' || source[i] == 'O' ||
source[i] == 'U')

{

vowel_count++;
}
}
destination[i] = '\0';
printf("Copied string: %s\n", destination);
printf("Number of vowels: %d\n", vowel_count);

return 0;
}
