#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];   
    char search[50];     
    int i, found = 0;
    printf("Enter 5 names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }
    printf("\nEnter a name to search: ");
    scanf("%s", search);
    for(i = 0; i < 5; i++) {
        if(strcmp(names[i], search) == 0) {
            found = 1;
            break;
        }
    }
    if(found)
        printf("\n%s is present in the array.\n", search);
    else
        printf("\n%s is not found in the array.\n", search);

    return 0;
}
