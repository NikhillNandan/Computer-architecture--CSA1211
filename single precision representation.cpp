#include <stdio.h>

// Function to print binary representation of a number
void printBinary(int n, int i)
{
    int k;
    for (k = i - 1; k >= 0; k--) { 
        if ((n >> k) & 1)  
            printf("1");
        else  
            printf("0");
    }
}

// Union to represent a float and its IEEE 754 components
typedef union {
    float f;
    struct {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } raw;
} myfloat;

// Function to print IEEE 754 representation of a float
void printIEEE(myfloat var)
{
    printf("%d | ", var.raw.sign); // Print the sign bit
    printBinary(var.raw.exponent, 8); // Print exponent in binary
    printf(" | ");
    printBinary(var.raw.mantissa, 23); // Print mantissa in binary
    printf("\n");
}

int main()
{
    myfloat var;
    var.f = 1259.125; // Assigning a float value

    printf("IEEE 754 representation of %f is: \n", var.f);
    printIEEE(var); // Print IEEE 754 representation
    return 0;
}

