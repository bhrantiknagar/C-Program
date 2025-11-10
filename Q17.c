#include <stdio.h>

// Function prototype
int fibonacci(int n);

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers:\n", n);

    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}

// Recursive function definition
int fibonacci(int n) {
    if (n == 0)
        return 0;      // first term
    else if (n == 1)
        return 1;      // second term
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // recursive relation
}
