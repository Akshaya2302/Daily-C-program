#include <stdio.h>

int main() {

    int arr[] = {15, 8, 30, 2, 99, 45, 12};
    
   
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int key, i;
    
 
    int found = 0; 

    printf("Enter the element you want to search for: ");
    scanf("%d", &key);

   
    for (i = 0; i < n; i++) {
        
      
        if (arr[i] == key) {
            printf("Element %d found at index %d.\n", key, i);
            found = 1; 
            break;    
        }
    }


    if (found == 0) {
        printf("Element %d was not found in the array.\n", key);
    }

    return 0;
}
