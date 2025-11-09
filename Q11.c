#include <stdio.h>

// Function prototype
void calculate(int a, int b, int *sum, float *avg);

int main() {
    int num1, num2, sum;
    float avg;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function
    calculate(num1, num2, &sum, &avg);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

// Function definition (after main)
void calculate(int a, int b, int *sum, float *avg) {
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
