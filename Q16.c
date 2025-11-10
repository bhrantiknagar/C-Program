#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}

// Recursive function definition
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;             // base case
    else
        return n * factorial(n - 1);  // recursive call
}
