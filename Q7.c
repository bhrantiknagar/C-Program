#include <stdio.h>

// Function declaration
void square(int n);

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function
    square(num);

    return 0;
}

// Function definition
void square(int n) {
    int result = n * n;
    printf("The square of %d is %d\n", n, result);
}
