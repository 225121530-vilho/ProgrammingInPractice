#include <stdio.h>
#include "budget.h"

void calculateBudget(void) {
    double rev, exp;
    printf("Enter revenue: ");
    scanf("%lf", &rev);
    printf("Enter expenses: ");
    scanf("%lf", &exp);
    printf("Balance: %.2f\n", rev - exp);
}