#include <stdio.h>

int main() {
    int n, i;
    int count = 0; 
    int num = 2;    

    
    printf("Enter the number of prime numbers to generate (n): ");
    scanf("%d", &n);

    printf("The first %d prime numbers are:\n", n);

    
    while (count < n) {
        
      
        int isPrime = 1; 

        
        for (i = 2; i * i <= num; i++) {
            
            if (num % i == 0) {
                isPrime = 0; 
                break;       
            }
        }

        
        if (isPrime == 1) {
            printf("%d ", num);
            count++; 
        }

      
        num++;
    }

    printf("\n"); 
    return 0;
}
