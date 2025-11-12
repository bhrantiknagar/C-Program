#include <stdio.h>
int isEven(int n);
int main() {
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);
    result = isEven(num);
    if (result == 1)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}
int isEven(int n) {
    if (n % 2 == 0)
        return 1;  
    else
        return 0;   
}

