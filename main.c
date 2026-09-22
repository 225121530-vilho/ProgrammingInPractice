#include <stdio.h>

int main() {
    int numVehicles;
    char registrations[50][20];
    char searchReg[20];
    int foundReg;
    int i, k;

    printf("================================\n");
    printf("MUNICIPAL INFORMATION SYSTEM\n");
    printf("Vehicle Registration Manager\n");
    printf("================================\n\n");

    printf("Enter number of vehicles: ");
    scanf("%d", &numVehicles);

    for (i = 0; i < numVehicles; i++) {
        printf("Enter vehicle registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\nAll Vehicle Registrations:\n");
    for (i = 0; i < numVehicles; i++) {
        printf(" %s\n", registrations[i]);
    }

    printf("\nEnter a registration to search for: ");
    scanf("%19s", searchReg);

    foundReg = 0;
    for (i = 0; i < numVehicles; i++) {
        int match = 1;
        k = 0;
        while (searchReg[k] != '\0' && registrations[i][k] != '\0') {
            if (searchReg[k] != registrations[i][k]) {
                match = 0;
                break;
            }
            k++;
        }
        if (match && searchReg[k] == '\0' && registrations[i][k] == '\0') {
            foundReg = 1;
            printf("Registration found at position %d\n", i + 1);
            break;
        }
    }

    if (!foundReg) {
        printf("Registration not found.\n");
    }

    printf("\n================================\n");
    printf("End of Municipal Information System\n");
    printf("================================\n");

    return 0;
}