#include <stdio.h>
#include <stdlib.h> // Required for malloc and realloc
#include "records.h"

void addEmployee(Employee **employees, int *count, int *capacity) {
    // If the array is full, double its size using realloc
    if (*count >= *capacity) {
        *capacity = *capacity * 2;
        *employees = (Employee *)realloc(*employees, (*capacity) * sizeof(Employee));
        if (*employees == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        printf("--> Expanded memory to hold %d employees.\n", *capacity);
    }

    printf("Enter Employee ID: ");
    scanf("%d", &(*employees)[*count].id);
    printf("Enter Employee Name: ");
    scanf("%49s", (*employees)[*count].name);
    printf("Enter Salary: ");
    scanf("%lf", &(*employees)[*count].salary);
    
    (*count)++;
    printf("--> Employee added successfully!\n");
}

void displayEmployees(Employee *employees, int count) {
    printf("\n--- Employee List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

void freeEmployees(Employee *employees) {
    free(employees); // Return memory to the computer
}

void addAsset(Asset **assets, int *count, int *capacity) {
    if (*count >= *capacity) {
        *capacity = *capacity * 2;
        *assets = (Asset *)realloc(*assets, (*capacity) * sizeof(Asset));
        if (*assets == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        printf("--> Expanded memory to hold %d assets.\n", *capacity);
    }

    printf("Enter Asset ID: ");
    scanf("%d", &(*assets)[*count].id);
    printf("Enter Asset Name: ");
    scanf("%49s", (*assets)[*count].name);
    printf("Enter Asset Value: ");
    scanf("%lf", &(*assets)[*count].value);
    
    (*count)++;
    printf("--> Asset added successfully!\n");
}

void displayAssets(Asset *assets, int count) {
    printf("\n--- Asset List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Value: %.2f\n", assets[i].id, assets[i].name, assets[i].value);
    }
}

void freeAssets(Asset *assets) {
    free(assets);
}