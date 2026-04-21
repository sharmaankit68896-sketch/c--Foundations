#include <stdio.h>

int main(void) {
    float radius, area;
    const float pi = 3.14159f;

    printf("___MISSION 1: AREA CALCULATOR___\n");
    printf("Enter the radius of the circle: ");
    if (scanf("%f", &radius) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    area = pi * radius * radius;
    printf("\nCalculating...\n");
    printf("The area of the circle is: %.2f\n", area);
    printf("Mission Status: SUCCESS.\n");

    return 0;
}
