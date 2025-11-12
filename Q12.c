#include <stdio.h>
int largest(int a, int b, int c);
int main() {
    int num1, num2, num3, big;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    big = largest(num1, num2, num3);
    printf("The largest number is: %d\n", big);
    return 0;
}
int largest(int a, int b, int c) {
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}
