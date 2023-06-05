#include<stdio.h>

// Factorial function using recursion

unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;  // Base case: factorial of 0 is 1
    }

    return n * factorial(n - 1);  // Recursive call with n-1
}

int main() {
    unsigned int num;

    printf("Enter a non-negative integer: ");
    scanf("%u", &num);

    unsigned long long result = factorial(num);

    printf("Factorial of %u is %llu\n", num, result);

    return 0;
}
