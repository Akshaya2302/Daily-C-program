#include <stdio.h>
int main()
{
int arr[] = {5, 12, 18, 23, 35, 42, 56, 61, 78, 90};
int n = 10; // number of elements
int target, low, high, mid, found = 0;
printf("Sorted array: ");
for(int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");
printf("Enter number to search: ");
scanf("%d", &target);
low = 0;
high = n - 1;
while(low <= high)
{
mid = (low + high) / 2;

if(arr[mid] == target)

{

printf("Number found at position %d\n", mid + 1);
found = 1;
break;
}
else if(arr[mid] < target)

{

low = mid + 1; // Search right half
}
else
{

high = mid - 1; // Search left half
}
}
if(!found)
{
printf("Number not found in array\n");
}
return 0;
}
