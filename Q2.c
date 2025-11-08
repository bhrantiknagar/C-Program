#include <stdio.h>
#include <string.h>

int main() {
    char st_name[5][50] = {"lucky","bhrantik","ankit","sakib","akshat"};
    int maxIndex = 0;

  

    // Find the longest name
    for(int i = 1; i < 5; i++) {
        if(strlen(st_name[i]) > strlen(st_name[maxIndex])) {
            maxIndex = i;
        }
    }

    // Print the longest name
    printf("The longest name is: %s\n", st_name[maxIndex]);

    return 0;
}
