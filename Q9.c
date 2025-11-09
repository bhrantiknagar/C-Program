#include <stdio.h>

int get_number();  // function declaration

int main() {
    int num;

    num = get_number();  // call the function
    printf("You entered: %d\n", num);

    return 0;
}

int get_number() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;  // return the entered number
}
