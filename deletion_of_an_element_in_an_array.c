#include <stdio.h>

int main() {
    int arr[100];
    int n, pos, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be deleted :");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) 
	{
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
    } 
	else
	 {
        
        for (i = pos - 1; i < n - 1; i++) 
		{
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
