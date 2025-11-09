#include <stdio.h>

// Function prototype
int get_number();

int main() {
    int a, b, sum;

    printf("Enter first number:\n");
    a = get_number();

    printf("Enter second number:\n");
    b = get_number();

    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

// Function definition (after main)
int get_number() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
