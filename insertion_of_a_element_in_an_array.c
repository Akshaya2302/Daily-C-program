#include <stdio.h>

int main() {
    int arr[100]; 
    int n;       
    int i, element, pos;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);
  
    printf("Enter index to insert at (0 to %d): ", n);
    scanf("%d", &pos);

    if(pos > n || pos < 0) 
	
	{
        printf("Invalid index! Index must be between 0 and %d\n", n);
    } 
    else 
	{
       
        for(i = n - 1; i >= pos; i--) 
		{
            arr[i + 1] = arr[i];
        }

     
        arr[pos] = element;

        n++;

        // 8. Output
        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
