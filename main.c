#include <stdio.h>
#include <string.h>

int main() {
    char supplierName[100];
    char email[100];
    char phone[30];
    char town[50];
    char backup[100];
    char description[300];
    char searchName[100];

    printf("================================\n");
    printf("SUPPLIER MANAGEMENT SYSTEM\n");
    printf("================================\n\n");

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);
    supplierName[strcspn(supplierName, "\n")] = '\0';

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    printf("Enter phone: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    town[strcspn(town, "\n")] = '\0';

    printf("\n--- SUPPLIER DETAILS ---\n");
    printf("Name : %s\n", supplierName);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town : %s\n", town);

    printf("\n--- STRING LENGTHS ---\n");
    printf("Supplier name length: %zu\n", strlen(supplierName));
    printf("Email length: %zu\n", strlen(email));
    printf("Town length: %zu\n", strlen(town));

    strcpy(backup, supplierName);
    printf("\n--- BACKUP COPY ---\n");
    printf("Original: %s\n", supplierName);
    printf("Backup  : %s\n", backup);

    strcpy(description, supplierName);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");
    printf("\n--- SUPPLIER DESCRIPTION ---\n");
    printf("%s\n", description);

    printf("\n--- SUPPLIER SEARCH ---\n");
    printf("Enter supplier name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    if (strcmp(supplierName, searchName) == 0) {
        printf("Supplier found.\n");
    } else {
        printf("Supplier not found.\n");
    }

    printf("\n================================\n");
    printf("End of Supplier Management System\n");
    printf("================================\n");

    return 0;
}