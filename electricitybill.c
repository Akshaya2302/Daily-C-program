#include <stdio.h>

int main() {
    
    char name[100];
    int units;
    double totalCharge = 0.0; 

   
    printf("Enter user's name: ");
    scanf("%s", name);
    
    printf("Enter total units consumed: ");
    scanf("%d", &units);


    if (units <= 200) {
     
        totalCharge = units * 0.80;
    } 
    else if (units <= 300) {
      
        totalCharge = (200 * 0.80) + ((units - 200) * 0.90);
    } 
    else {
       
        totalCharge = (200 * 0.80) + (100 * 0.90) + ((units - 300) * 1.00);
    }

    if (totalCharge < 100.0)
	{
        totalCharge = 100.0;
    }
.
    if (totalCharge > 400.0) {
        double surcharge = totalCharge * 0.15; 
        totalCharge = totalCharge + surcharge; 
    }

   
    printf("\n--- Electricity Bill ---\n");
    printf("User Name: \t%s\n", name);
    printf("Units Consumed: %d\n", units);
    
    printf("Total Amount: \tRs. %.2f\n", totalCharge);

    return 0;
}
