#include <stdio.h>

int main() {
    int counter = 0;
    int input;
    int num1, num2;
    int op;
    int res;
    int ins;
    int performance_measure = 0;

    // Get first input value
    printf("\nEnter 1st value: ");
    scanf("%d", &num1);
    counter += 1;

    // Get second input value
    printf("\nEnter the 2nd value: ");
    scanf("%d", &num2);
    counter += 1;

    // Get operation option
    printf("\nEnter the option:\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n");
    scanf("%d", &op);

    // Switch statement for performing operations
    switch(op) {
        case 1:
            printf("Performing addition operation\n");
            res = num1 + num2;
            counter += 1;
            break;
        case 2:
            printf("Performing subtraction operation\n");
            res = num1 - num2;
            counter += 1;
            break;
        case 3:
            printf("Performing multiplication operation\n");
            res = num1 * num2;
            counter += 1;
            break;
        case 4:
            if (num2 == 0) {
                printf("\nDenominator can't be zero\n");
            } else {
                printf("Performing division operation\n");
                res = num1 / num2; // Integer division
                counter += 1;
            }
            break;
        default:
            printf("Invalid case...\n");
            counter += 3;
            break;
    }

    // Output result of operation
    printf("\nResult: %d\n", res);
    printf("CYCLE VALUE IS: %d\n", counter);

    // Get number of instructions
    printf("Enter the number of instructions: ");
    scanf("%d", &ins);

    // Calculate and display performance measure
    if (counter != 0) {
        performance_measure = ins / counter; // Integer division
        printf("\nPerformance Measure is: %d\n", performance_measure);
    } else {
        printf("\nPerformance Measure cannot be calculated due to division by zero in counter\n");
    }
}

