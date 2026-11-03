#include <stdio.h>
#include <stdlib.h>
#include "records.h"
#include "budget.h"
#include "utilities.h"

int main(void) {
    int capacity = 2; 
    
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
        printf("\n=== MFMS WEEK 13 MENU ===\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Add Asset\n");
        printf("5. Display Assets\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addEmployee(&employees, &employeeCount, &capacity); break;
            case 2: displayEmployees(employees, employeeCount); break;
            case 3: searchEmployee(employees, employeeCount); break;
            case 4: addAsset(&assets, &assetCount, &capacity); break;
            case 5: displayAssets(assets, assetCount); break;
            case 6: printf("Goodbye.\n"); break;
            default: printf("Invalid choice.\n");
        }
        if(choice != 6) pauseScreen();
    } while(choice != 6);
    
    freeEmployees(employees);
    freeAssets(assets);

    return 0;
}