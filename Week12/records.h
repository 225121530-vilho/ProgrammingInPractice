#ifndef RECORDS_H
#define RECORDS_H

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

// Notice the double pointers (**) and the size variable
void addEmployee(Employee **employees, int *count, int *capacity);
void displayEmployees(Employee *employees, int count);
void freeEmployees(Employee *employees);

void addAsset(Asset **assets, int *count, int *capacity);
void displayAssets(Asset *assets, int count);
void freeAssets(Asset *assets);

#endif