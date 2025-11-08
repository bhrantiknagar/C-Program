#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function and store the result
    result = add(num1, num2);

    // Display the sum
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;  // Return the sum
}
