#include <stdio.h>

<<<<<<< HEAD
void displayWelcome();
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
void displayMenu();
int searchEmployee(int id, int ids[], int size);

int main() {
    int choice;
    float amount;
    float basic, housing, transport;
    float revenue, expenses;
    float result;
    int employeeID;
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int position;

    displayWelcome();

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter amount: ");
                scanf("%f", &amount);
                printf("VAT (15%%): %.2f\n", calculateVAT(amount));
                break;

            case 2:
                printf("\nEnter basic salary: ");
                scanf("%f", &basic);
                printf("Enter housing allowance: ");
                scanf("%f", &housing);
                printf("Enter transport allowance: ");
                scanf("%f", &transport);
                printf("Gross Salary: %.2f\n", calculateSalary(basic, housing, transport));
                break;

            case 3:
                printf("\nEnter total revenue: ");
                scanf("%f", &revenue);
                printf("Enter total expenses: ");
                scanf("%f", &expenses);
                result = calculateBudget(revenue, expenses);
                printf("Budget Balance: %.2f\n", result);
                if (result > 0) {
                    printf("Status: SURPLUS\n");
                } else if (result < 0) {
                    printf("Status: DEFICIT\n");
                } else {
                    printf("Status: BALANCED\n");
                }
                break;

            case 4:
                printf("\nEnter employee ID: ");
                scanf("%d", &employeeID);
                position = searchEmployee(employeeID, employeeIDs, 5);
                if (position != -1) {
                    printf("Employee found at position %d.\n", position);
                } else {
                    printf("Employee not found.\n");
                }
                break;

            case 5:
                printf("\nGoodbye.\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void displayWelcome() {
    printf("================================\n");
    printf("Welcome to the Municipal\n");
    printf("Financial Management System\n");
    printf("================================\n");
}

float calculateVAT(float amount) {
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

void displayMenu() {
    printf("\n================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

int searchEmployee(int id, int ids[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i;
        }
    }
    return -1;
=======
int main() {
    int numVehicles;
    char registrations[50][20];
    char searchReg[20];
    int foundReg;
    int i, k;

    printf("================================\n");
    printf("MUNICIPAL INFORMATION SYSTEM\n");
    printf("Vehicle Registration Manager\n");
    printf("================================\n\n");

    printf("Enter number of vehicles: ");
    scanf("%d", &numVehicles);

    for (i = 0; i < numVehicles; i++) {
        printf("Enter vehicle registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\nAll Vehicle Registrations:\n");
    for (i = 0; i < numVehicles; i++) {
        printf(" %s\n", registrations[i]);
    }

    printf("\nEnter a registration to search for: ");
    scanf("%19s", searchReg);

    foundReg = 0;
    for (i = 0; i < numVehicles; i++) {
        int match = 1;
        k = 0;
        while (searchReg[k] != '\0' && registrations[i][k] != '\0') {
            if (searchReg[k] != registrations[i][k]) {
                match = 0;
                break;
            }
            k++;
        }
        if (match && searchReg[k] == '\0' && registrations[i][k] == '\0') {
            foundReg = 1;
            printf("Registration found at position %d\n", i + 1);
            break;
        }
    }

    if (!foundReg) {
        printf("Registration not found.\n");
    }

    printf("\n================================\n");
    printf("End of Municipal Information System\n");
    printf("================================\n");

    return 0;
>>>>>>> 86fe015257859ba542dc3efbb659bf0c2f8f199a
}