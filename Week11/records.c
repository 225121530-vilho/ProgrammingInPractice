#include <stdio.h>
#include "records.h"

void addEmployee(Employee employees[], int *count) {
    if (*count >= MAX_RECORDS) {
        printf("Database full!\n");
        return;
    }
    printf("Enter Employee ID: ");
    scanf("%d", &employees[*count].id);
    printf("Enter Employee Name: ");
    scanf("%49s", employees[*count].name);
    printf("Enter Salary: ");
    scanf("%lf", &employees[*count].salary);
    
    (*count)++;
    printf("--> Employee added!\n");
}

void displayEmployees(Employee employees[], int count) {
    printf("\n--- Employee List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

void addAsset(Asset assets[], int *count) {
    if (*count >= MAX_RECORDS) {
        printf("Database full!\n");
        return;
    }
    printf("Enter Asset ID: ");
    scanf("%d", &assets[*count].id);
    printf("Enter Asset Name: ");
    scanf("%49s", assets[*count].name);
    printf("Enter Asset Value: ");
    scanf("%lf", &assets[*count].value);
    
    (*count)++;
    printf("--> Asset added!\n");
}

void displayAssets(Asset assets[], int count) {
    printf("\n--- Asset List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Value: %.2f\n", assets[i].id, assets[i].name, assets[i].value);
    }
}