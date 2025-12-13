#include <stdio.h>

// Create a function
void calculateSum() {
  int x;
  int y;
  printf("Enter the values of x and y:");
  scanf("%d%d",&x,&y);
  
  int sum = x + y;
  printf("The sum of x + y is: %d", sum);
}

int main() 
{
  calculateSum();
  calculateSum(); // call the function
   
  return 0;
}
