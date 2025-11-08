#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];   // to store 5 names
    char search[50];     // name to search
    int i, found = 0;

    // Input 5 names
    printf("Enter 5 names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    // Input name to search
    printf("\nEnter a name to search: ");
    scanf("%s", search);

    // Check if the name is present
    for(i = 0; i < 5; i++) {
        if(strcmp(names[i], search) == 0) {
            found = 1;
            break;
        }
    }

    // Display result
    if(found)
        printf("\n%s is present in the array.\n", search);
    else
        printf("\n%s is not found in the array.\n", search);

    return 0;
}
