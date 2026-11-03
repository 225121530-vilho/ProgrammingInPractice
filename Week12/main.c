#include <stdio.h>
#include <stdlib.h>
#include "records.h"
#include "budget.h"
#include "utilities.h"

int main(void) {
    int capacity = 2; // Start with space for only 2 items
    
    // Allocate initial memory dynamically
    Employee *employees = (Employee *)malloc(capacity * sizeof(Employee));
    int employeeCount = 0;

    Asset *assets = (Asset *)malloc(capacity * sizeof(Asset));
    int assetCount = 0;

    if (employees == NULL || assets == NULL) {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    int choice;
    do {
        printf("\n=== MFMS WEEK 12 MENU (Pointers) ===\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Add Asset\n");
        printf("4. Display Assets\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            // Pass the address of the pointer (&employees) and address of counts
            case 1: addEmployee(&employees, &employeeCount, &capacity); break;
            case 2: displayEmployees(employees, employeeCount); break;
            case 3: addAsset(&assets, &assetCount, &capacity); break;
            case 4: displayAssets(assets, assetCount); break;
            case 5: printf("Goodbye.\n"); break;
            default: printf("Invalid choice.\n");
        }
        if(choice != 5) pauseScreen();
    } while(choice != 5);
    
    // ALWAYS free dynamically allocated memory before exiting
    freeEmployees(employees);
    freeAssets(assets);

    return 0;
}