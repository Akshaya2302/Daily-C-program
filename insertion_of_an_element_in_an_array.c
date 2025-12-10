#include<stdio.h>
int main()
{
    int arr[100];
    int n, pos, i, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where element is to be inserted: ");
    scanf("%d", &pos);

    printf("Enter the value to be inserted: ");
    scanf("%d", &value);

  
    for(i = n-1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[pos] = value;
    n++;

    printf("Element inserted successfully.\n");
    printf("Updated array:\n ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
