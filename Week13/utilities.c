#include <stdio.h>
#include "utilities.h"

void pauseScreen(void) {
    printf("\nPress Enter to continue...");
    while (getchar() != '\n'); // clear buffer
    getchar(); // wait for enter
}