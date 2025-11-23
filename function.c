#include<stdio.h>
#include<string.h>
// void printHello();
// void hello();

// int main() {
//     printHello();
//     hello();
//     return 0;
// }

// void printHello() {
//     printf("this is my first function\n");
// }

// void hello() {
//     printf("this is my second function\n");
// }



// void namaste();
// void hello();
 
// int main() {
//     printf("Enter your nastionality:\n");
//     char ch;
//     scanf("%s",&ch);
    
//     if(ch == 'i') {
//         namaste();
//     }
//     else {
//         hello();
//     }
//     return 0;

// }
 
// void namaste() {
//     printf("Namaste\n");
// }

// void hello() {
//     printf("hello\n");
// }




void rajasthan(char name[]);
void uttarpradesh();
void gujrat();
void haryana();
void odisha();
void tamilnadu();
void westbengal();
void punjab();
void Namaste();

int main() {
char name[50];
    char state[50];    
    printf("\nEnter the your state name :");
    scanf("%s",&state);

    if (strcmp(state,"rajasthan") == 0) {
        rajasthan(name);
    }
    else if (strcmp(state,"uttarpradesh") == 0) {
        uttarpradesh();
    }
    else if ( strcmp(state,"uttarpradesh") == 0) {
        gujrat();
    }
    else if ( strcmp(state,"uttarpradesh") == 0) {
        haryana();
    }
    else if ( strcmp(state,"uttarpradesh") == 0) {
        odisha();
    }
    else if ( strcmp(state,"uttarpradesh") == 0) {
        tamilnadu();
    }
    else if ( strcmp(state,"uttarpradesh") == 0) {
        westbengal();
    }
    else if ( strcmp(state,"uttarpradesh") == 0) {
        punjab();
    }
    else {
        Namaste();
    }
}

void username(char name[]){

    printf("Enter your Name :");
    scanf("%s", name);
}

void rajasthan(char name[]) {
    
    printf("Khamma Ghani, %s\n", name);
}
void uttarpradesh() {
    printf("Radhe Radhe\n");
}
void gujrat() {
    printf("Jai shri Krishna\n");
}
void haryana() {
    printf("Ram Ram Ji\n");
}
void odisha() {
    printf("Jai Jagannath\n");
}
void tamilnadu() {
    printf("Vanakkam\n");
}
void westbengal() {
    printf("Nomoshkar\n");
}
void punjab() {
    printf("Sat Shri Akal\n");
}
void Namaste() {
    printf("Namaste\n");
}

