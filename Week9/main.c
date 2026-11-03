#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "utilities.h"

int main(void) {
    int choice;
    do {
        printf("\n=== MFMS WEEK 9 MENU ===\n");
        printf("1. Add Employee\n");
        printf("2. List Employees\n");
        printf("3. Calculate Budget\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addEmployee(); break;
            case 2: listEmployees(); break;
            case 3: calculateBudget(); break;
            case 4: printf("Goodbye.\n"); break;
            default: printf("Invalid choice.\n");
        }
        if(choice != 4) pauseScreen();
    } while(choice != 4);
    
    return 0;
}