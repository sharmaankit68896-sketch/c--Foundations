#include <stdio.h>

int main(void) {
    float side, area;

    printf("___MISSION 2: SQUARE GATEKEEPER___\n");
    printf("Enter the length of the side: ");
    if (scanf("%f", &side) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    if (side > 1000) {
        printf("\n[!] WARNING: Side is too large for local system!\n");
    } else if (side <= 0) {
        printf("Negative or zero space is impossible.\n");
    } else {
        area = side * side;
        printf("\nSuccess! The area of the square is: %.2f\n", area);
    }

    return 0;
}