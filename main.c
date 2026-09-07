#include <stdio.h>

int main() {
<<<<<<< HEAD
    double revenue;
    double expenses;
    double balance;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------------\n\n");

    printf("Enter Total Revenue: ");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\n---------------------------------\n");
    printf("Revenue  : $%.2f\n", revenue);
    printf("Expenses : $%.2f\n", expenses);
    printf("Balance  : $%.2f\n", balance);
=======
    char municipality[50];
    char mayor[50];
    int population;

    printf("Municipal Financial Management System\n");
    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    scanf("%49s", municipality);

    printf("Enter Mayor's Name: ");
    scanf("%49s", mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n---------------------------------\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor        : %s\n", mayor);
    printf("Population   : %d\n", population);
>>>>>>> 99ea87fd0cd2e0c9c092321c6b1a8f1eaecd6d93
    printf("---------------------------------\n");

    return 0;
}