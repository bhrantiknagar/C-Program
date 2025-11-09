#include <stdio.h>

// Function prototype
void swap(int a, int b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping (in main): x = %d, y = %d\n", x, y);

    swap(x, y); // Call by value

    printf("\nAfter swapping (in main): x = %d, y = %d\n", y, x);

    return 0;
}
// Function definition (after main)
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nInside function (after swap): a = %d, b = %d\n", a, b);
}
