#include <stdio.h>

int OctalToDecimal(int n) {
   int p = 0, decimal = 0, r;

   while (n > 0) {
       // Retrieve the right-most digit of n
       r = n % 10;
       
       // Divide n by 10 to remove the right-most digit
       n = n / 10;
       
       // Calculate the decimal value
       decimal = decimal + r * (1 << (3 * p));  // Equivalent to pow(8, p) but faster
       ++p;
   }

   return decimal;
}

int main() {
   int n;
   printf("Enter Octal: ");
   scanf("%d", &n);
   printf("\nDecimal of Octal Number %d is : %d\n", n, OctalToDecimal(n));
   return 0;
}

