#include <stdio.h>

int main() {
    int counter = 1;
    int a, b, choice, res = 0, ins;
    float performance_measure;

    // Input Stage
    printf("ENTER NUMBER-1: ");
    scanf("%d", &a);
    counter += 1;

    printf("ENTER NUMBER-2: ");
    scanf("%d", &b);
    counter += 1;

    // Operation Selection Stage
    printf("1-ADDITION 2-SUBTRACTION 3-MULTIPLICATION 4-DIVISION\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    // Processing Stage
    switch (choice) {
        case 1:
            printf("Performing Addition...\n");
            res = a + b;
            counter += 1;
            break;
        case 2:
            printf("Performing Subtraction...\n");
            res = a - b;
            counter += 1;
            break;
        case 3:
            printf("Performing Multiplication...\n");
            res = a * b;
            counter += 1;
            break;
        case 4:
            if (b == 0) {
                printf("Denominator can't be Zero\n");
            } else {
                printf("Performing Division...\n");
                res = a / b;
                counter += 1;
            }
            break;
        default:
            printf("Enter Correct Input\n");
            counter += 1;
    }

    // Output Stage
    printf("Result: %d\n", res);
    counter += 3;

    printf("Enter the No. of instructions: ");
    scanf("%d", &ins);

    performance_measure = (float)ins / counter;
    printf("Performance measure is: %.2f\n", performance_measure);

    return 0;
}

