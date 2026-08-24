#include<stdio.h>

int getluckynumber()
{
    int num;
    printf("Enter your fav number: ");
    scanf("%d", &num);
    
    return num; 
}
int main() 
{
    int caughtNumber = getluckynumber();
    
    printf("The machine returned: %d", caughtNumber);
    
    return 0;
}
