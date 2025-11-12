#include <stdio.h>
void square(int n);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    square(num);
    return 0;
}
void square(int n) {
    int result = n * n;
    printf("The square of %d is %d\n", n, result);
}
