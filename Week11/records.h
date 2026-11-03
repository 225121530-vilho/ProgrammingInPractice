#ifndef RECORDS_H
#define RECORDS_H

#define MAX_RECORDS 100

typedef struct {
    int id;
    char name[50];
    double salary;
} Employee;

typedef struct {
    int id;
    char name[50];
    double value;
} Asset;

void addEmployee(Employee employees[], int *count);
void displayEmployees(Employee employees[], int count);
void addAsset(Asset assets[], int *count);
void displayAssets(Asset assets[], int count);

#endif