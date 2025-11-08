#include <stdio.h>
#include <string.h>

int main() {
    char cities[5][50];  // array to store 5 city names, each up to 49 characters
    char temp[50];
    int i, j;

    // Input city names
    printf("Enter 5 city names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", cities[i]);
    }

    // Sort city names alphabetically using bubble sort
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(cities[i], cities[j]) > 0) {
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }

    // Display sorted city names
    printf("\nCities in alphabetical order:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", cities[i]);
    }

    return 0;
}
