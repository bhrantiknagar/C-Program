#include <stdio.h> 

// int main() {
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;

//     printf("%p\n", &age);

//     return 0;
// }



// int main() {
//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;     // this line is important

//     printf("x = %d\n", x);
//     printf("*ptr = %d \n", *ptr);

//     *ptr += 5;
//     printf("x = %d\n", x);
//     printf("*ptr = %d \n", *ptr);

//     (*ptr)++;
//     printf("x = %d\n", x);
//     printf("*ptr = %d \n", *ptr);

//     return 0;
// }



    // pointer to pointer 
// int main() {
//     // float price = 100.00;
//     // float *ptr = &price;
//     // float **pptr = &ptr;

//     int i =5;
//     int *ptr =&i;
//     int **pptr = &ptr;

//     printf("%d\n", **pptr);

//     return 0;
// }



void square(int n);
void _square(int* n);

int main() {
    int number = 4;
    square(number);
    printf("number = %d\n ", number);
    return 0;
}

void square(int n) {
    n = n * n;
    printf("square = %d\n", n);
}

void _square(int* n) {
    *n = (*n) * (*n);
    printf("sqaure = %d\n", *n);
}

