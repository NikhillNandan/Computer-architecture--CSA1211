#include <stdio.h>

void add(int acum[], int bo[], int n);

int q[100], b[100], acum[100] = {0};

int main() {
    int x, y, i = 0;

    printf("Enter two numbers (x and y): ");
    scanf("%d%d", &x, &y);

    // Convert x and y to binary and store in arrays q[] and b[]
    while (x > 0 || y > 0) {
        if (x > 0) {
            q[i] = x % 2;
            x = x / 2;
        } else {
            q[i] = 0;
        }

        if (y > 0) {
            b[i] = y % 2;
            y = y / 2;
        } else {
            b[i] = 0;
        }
        i++;
    }

    int n = i;

    int bc[50];  // To store the binary complement of b

    // Get the 1's complement of b[]
    for (i = 0; i < n; i++) {
        bc[i] = b[i] == 0 ? 1 : 0;
    }

    bc[n] = 1;  // Add 1 to get 2's complement
    for (i = 0; i <= n; i++) {
        if (bc[i] == 0) {
            bc[i] = 1;
            break;
        } else {
            bc[i] = 0;
        }
    }

    b[n] = 0;  // Nullify the last element of b[] for clarity

    // Initialize acum[] (Accumulator) and perform division
    for (i = n; i != 0; i--) {
        for (int j = n; j > 0; j--) {
            acum[j] = acum[j - 1];
        }

        acum[0] = q[n - 1];
        for (int j = n - 1; j > 0; j--) {
            q[j] = q[j - 1];
        }

        add(acum, bc, n + 1);

        if (acum[n] == 1) {
            q[0] = 0;
            add(acum, b, n + 1);
        } else {
            q[0] = 1;
        }
    }

    // Output the quotient
    printf("\nQuotient: ");
    for (int l = n - 1; l >= 0; l--) {
        printf("%d", q[l]);
    }

    // Output the remainder
    printf("\nRemainder: ");
    for (int l = n; l >= 0; l--) {
        printf("%d", acum[l]);
    }

    return 0;
}

// Function to add two binary numbers
void add(int acum[], int bo[], int n) {
    int temp = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum = acum[i] + bo[i] + temp;
        if (sum == 0) {
            acum[i] = 0;
            temp = 0;
        } else if (sum == 2) {
            acum[i] = 0;
            temp = 1;
        } else if (sum == 1) {
            acum[i] = 1;
            temp = 0;
        } else if (sum == 3) {
            acum[i] = 1;
            temp = 1;
        }
    }
}

