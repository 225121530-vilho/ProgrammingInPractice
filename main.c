#include <stdio.h>

int main() {
    float basicSalary;
    float housing;
    float transport;
    float tax;
    float grossSalary;
    float netSalary;

    printf("EMPLOYEE SALARY CALCULATOR\n");
    printf("---------------------------------\n\n");

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter housing allowance: ");
    scanf("%f", &housing);

    printf("Enter transport allowance: ");
    scanf("%f", &transport);

    printf("Enter tax: ");
    scanf("%f", &tax);

    grossSalary = basicSalary + housing + transport;

    netSalary = grossSalary - tax;

    printf("\n---------------------------------\n");
    printf("SALARY SUMMARY\n");
    printf("---------------------------------\n");
    printf("Basic Salary    : NAD %.2f\n", basicSalary);
    printf("Housing         : NAD %.2f\n", housing);
    printf("Transport       : NAD %.2f\n", transport);
    printf("Gross Salary    : NAD %.2f\n", grossSalary);
    printf("Tax             : NAD %.2f\n", tax);
    printf("Net Salary      : NAD %.2f\n", netSalary);
    printf("---------------------------------\n");

    return 0;
}