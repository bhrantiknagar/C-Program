//  Q.3.Input 3 strings and display the number of vowels
// in each string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[3][100];   // To store 3 strings, each up to 99 characters
    int i, j, count;

    // Input 3 strings
    printf("Enter 3 strings:\n");
    for(i = 0; i < 3; i++) {
        printf("String %d: ", i + 1);
        gets(str[i]);   // reads a string (you can use fgets in modern C)
    }

    // Count vowels in each string
    for(i = 0; i < 3; i++) {
        count = 0;
        for(j = 0; j < strlen(str[i]); j++) {
            char ch = tolower(str[i][j]);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }
        printf("Number of vowels in string %d = %d\n", i + 1, count);
    }

    return 0;
}
