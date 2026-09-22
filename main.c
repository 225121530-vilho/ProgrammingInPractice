#include <stdio.h>

int main() {
    char supplierName[50];
    float price;
    float budget;
    int registered;
    int documentsComplete;

    printf("TENDER EVALUATION SYSTEM\n");
    printf("---------------------------------\n\n");

    printf("Enter supplier name: ");
    scanf("%49s", supplierName);

    printf("Enter tender price: ");
    scanf("%f", &price);

    printf("Enter available budget: ");
    scanf("%f", &budget);

    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

    printf("\n---------------------------------\n");
    printf("TENDER EVALUATION RESULT\n");
    printf("---------------------------------\n");
    printf("Supplier: %s\n", supplierName);
    printf("Price: NAD %.2f\n", price);
    printf("Budget: NAD %.2f\n", budget);
    printf("---------------------------------\n");

    if (registered == 0 || documentsComplete == 0) {
        printf("Status: DISQUALIFIED\n");
        printf("Reason: Registration or documents incomplete\n");
    }
    else if (price > budget) {
        printf("Status: DISQUALIFIED\n");
        printf("Reason: Price exceeds available budget\n");
    }
    else {
        printf("Status: QUALIFIED\n");
    }

    printf("---------------------------------\n");
    return 0;
}