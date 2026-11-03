#include <stdio.h>
#include "employees.h"

void addEmployee(void) {
    FILE *fp = fopen("data/employees.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }
    
    int id;
    char name[50];
    double salary;
    
    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter Name (no spaces): ");
    scanf("%49s", name);
    printf("Enter Salary: ");
    scanf("%lf", &salary);
    
    fprintf(fp, "%d %s %.2f\n", id, name, salary);
    fclose(fp);
    printf("--> Employee saved to file successfully!\n");
}

void listEmployees(void) {
    FILE *fp = fopen("data/employees.txt", "r");
    if (fp == NULL) {
        printf("No employee records found yet.\n");
        return;
    }
    
    int id;
    char name[50];
    double salary;
    
    printf("\n--- Employee List ---\n");
    while (fscanf(fp, "%d %49s %lf", &id, name, &salary) == 3) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", id, name, salary);
    }
    fclose(fp);
}