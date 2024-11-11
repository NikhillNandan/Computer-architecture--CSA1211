#include <stdio.h>

int main() {
    float cr, cpi, ct, max;
    int p, i;
    float cpu[5];
    
    printf("Enter the number of processors (up to 5): ");
    scanf("%d", &p);
    
    if (p > 5) {
        printf("Please enter a number up to 5.\n");
        return 1;
    }

    for (i = 0; i < p; i++) {
        printf("\nEnter the Cycles per Instruction (CPI) of processor %d: ", i + 1);
        scanf("%f", &cpi);
        
        printf("Enter the clock rate in GHz of processor %d: ", i + 1);
        scanf("%f", &cr);

        ct = 1000 * cpi / cr;
        printf("The CPU time for processor %d is: %f\n", i + 1, ct);
        cpu[i] = ct;
    }

    max = cpu[0];
    for (i = 1; i < p; i++) {
        if (cpu[i] < max) {
            max = cpu[i];
        }
    }

    printf("\nThe processor with the lowest execution time has a time of: %f\n", max);
    return 0;
}

