#include <stdio.h>

int main() {
    int choice;
    int active = 1;

    while (active) {
        printf("\n--- COMMAND CENTER (V2.0) ---");
        printf("\n1. Circle  2. Square  3. Rectangle  4. Exit");
        printf("\nSelect Option: ")
        if (scanf("%d", &choice) != 1) {
            printf("[!] CRITICAL ERROR: Numeric input required.\n");
            while (getchar() != '\n'); 
            continue; 
        }

        switch (choice) {
            case 1:
                break;
            case 4:
                printf("System Shutdown Initiated.\n");
                active = 0;
                break;
            default:
                printf("[?] Option not found.\n");
        }
    }
    return 0;
}

       
              


