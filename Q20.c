#include <stdio.h>

// Function prototype
void reverse(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // for simplicity (use fgets in modern C for safety)

    printf("Reversed string: ");
    reverse(str);
    printf("\n");

    return 0;
}

// Recursive function definition
void reverse(char str[]) {
    if (*str == '\0')   // base case: end of string
        return;
    reverse(str + 1);   // recursive call with next character
    putchar(*str);      // print character after recursive call
}
