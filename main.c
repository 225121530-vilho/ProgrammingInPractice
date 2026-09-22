#include <stdio.h>

int main() {
    float salary;
    float total = 0;
    float highest = 0;
    float lowest = 0;
    float average;

    printf("MUNICIPAL EMPLOYEE SALARY ANALYSIS\n");
    printf("---------------------------------\n\n");

    for (int i = 1; i <= 5; i++) {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);

        total = total + salary;

        if (i == 1) {
            highest = salary;
            lowest = salary;
        }

        if (salary > highest) {
            highest = salary;
        }

        if (salary < lowest) {
            lowest = salary;
        }
    }

    average = total / 5;

    printf("\n--- Salary Report ---\n");
    printf("-----------------------------\n");
    printf("Total salary   : NAD %.2f\n", total);
    printf("Average salary : NAD %.2f\n", average);
    printf("Highest salary : NAD %.2f\n", highest);
    printf("Lowest salary  : NAD %.2f\n", lowest);
    printf("-----------------------------\n");

    return 0;
}