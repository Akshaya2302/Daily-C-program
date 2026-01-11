#include <stdio.h>
int main()
{
    char str[1000];
    int i, word_count = 0, in_word = 0;
    
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    
            for(i = 0; str[i] != '\0'; i++)
           {
                if(str[i] == ' ')
                {
                in_word = 0;
                }
            else if(in_word == 0)
            {
                word_count++;
                in_word = 1;
            }
        }
        printf("Number of words: %d\n", word_count);
        return 0;
}
