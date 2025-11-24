#include <stdio.h>

int main() 
{
    int i, num = 2;

    printf("Enter the number for multiplication : %d:\n", num);

    for (i = 1; i <= 10; i++) 
	{
    	
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
