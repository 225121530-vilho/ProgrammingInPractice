#include <stdio.h>
#include "records.h"
#include "budget.h"
#include "utilities.h"

int main(void) {
    Employee employees[MAX_RECORDS];
    int employeeCount = 0;
    
    Asset assets[MAX_RECORDS];
    int assetCount = 0;

    int choice;
    do {
        printf("\n=== MFMS WEEK 11 MENU (Structures) ===\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Add Asset\n");
        printf("4. Display Assets\n");
        printf("5. Calculate Budget\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addEmployee(employees, &employeeCount); break;
            case 2: displayEmployees(employees, employeeCount); break;
            case 3: addAsset(assets, &assetCount); break;
            case 4: displayAssets(assets, assetCount); break;
            case 5: calculateBudget(); break;
            case 6: printf("Goodbye.\n"); break;
            default: printf("Invalid choice.\n");
        }
        if(choice != 6) pauseScreen();
    } while(choice != 6);
    
    return 0;
}