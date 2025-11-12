#include <stdio.h>
int get_number();  
int main() {
    int num;
    num = get_number();  
    printf("You entered: %d\n", num);
    return 0;
}
int get_number() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;  
}
