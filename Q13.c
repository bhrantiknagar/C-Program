#include <stdio.h>
void swap(int a, int b);
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("\nBefore swapping (in main): x = %d, y = %d\n", x, y);
    swap(x, y); 
    printf("\nAfter swapping (in main): x = %d, y = %d\n", y, x);
    return 0;
}
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nInside function (after swap): a = %d, b = %d\n", a, b);
}