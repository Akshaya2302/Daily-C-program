#include<stdio.h>
int main()
{
    
   int max_score = 500;
   int user_score = 423;
   
   float total_percentage = (float)user_score/max_score*100.0;
   
   printf("the user percentage is : %f\n",total_percentage);
    return 0;
}
