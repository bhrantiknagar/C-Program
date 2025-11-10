#include <stdio.h>

// Function prototype
int power(int x, int n);

int main() {
    int x, n, result;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    result = power(x, n);

    printf("%d raised to the power %d is %d\n", x, n, result);

    return 0;
}

// Recursive function definition
int power(int x, int n) {
    if (n == 0)
        return 1;               // base case: x^0 = 1
    else
        return x * power(x, n - 1);  // recursive step
}
