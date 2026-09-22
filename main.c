#include <stdio.h>

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
}