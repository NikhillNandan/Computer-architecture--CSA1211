#include <stdio.h>
#include <math.h>

int OctalToDecimal(int n) {
    int p = 0, decimal = 0, r;
    while (n > 0) {
        r = n % 10;
        n = n / 10;
        decimal = decimal + r * pow(8, p);
        ++p;
    }
    return decimal;
}

int DecimalToBinary(int n) {
    int binary = 0, p = 1;
    while (n > 0) {
        binary += (n % 2) * p;
        n /= 2;
        p *= 10;
    }
    return binary;
}

int main() {
    int n;
    printf("Enter Octal: ");
    scanf("%d", &n);
    int decimal = OctalToDecimal(n);
    printf("\nBinary of Octal Number %d is : %d\n", n, DecimalToBinary(decimal));
    return 0;
}

