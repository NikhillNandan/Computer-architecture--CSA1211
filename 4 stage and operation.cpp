#include <stdio.h>

int main() {
    int counter = 1; // Initialize cycle counter
    int a, b, res, ins;
    float performance_measure;

    // Stage 1: Input first number
    printf("ENTER NUMBER-1: ");
    scanf("%d", &a);
    counter += 1;

    // Stage 2: Input second number
    printf("ENTER NUMBER-2: ");
    scanf("%d", &b);
    counter += 1;

    // Stage 3: Perform AND operation
    res = a && b;
    counter += 1;

    // Stage 4: Output result
    printf("Result of AND operation: %d\n", res);
    counter += 2;

    // Calculate performance measure
    printf("Enter the number of instructions: ");
    scanf("%d", &ins);

    performance_measure = (float)ins / counter;
    printf("Performance measure is: %.2f\n", performance_measure);

    return 0;
}

