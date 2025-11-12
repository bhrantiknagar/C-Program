#include <stdio.h>
void reverse(char str[]);
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  
    printf("Reversed string: ");
    reverse(str);
    printf("\n");
    return 0;
}
void reverse(char str[]) {
    if (*str == '\0')   
        return;
    reverse(str + 1);   
    putchar(*str);      
}
