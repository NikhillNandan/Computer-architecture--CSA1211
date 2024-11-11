#include <stdio.h>

int main()
{
    int n;

    printf("Enter the hexadecimal number (e.g., 1A3 or 0x1A3): ");
    if (scanf("%x", &n) != 1) {  // Ensure valid input
        printf("Invalid hexadecimal input.\n");
        return 1;
    }

    printf("The decimal value is: %d\n", n);

    return 0;
}

