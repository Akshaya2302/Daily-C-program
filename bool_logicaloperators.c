#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool isloggedin = true;
	bool isadmin = false;
	
	printf("Regular user:%s\n",(isloggedin && !isadmin)? "true" : "false");
	printf("Has accessed:%s\n",(isloggedin || isadmin)? "true" : "false");
	printf("Not logged in:%s\n",(!isloggedin )? "true" : "false");
	
	return 0;
	
}
