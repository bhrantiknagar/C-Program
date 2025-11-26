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



// void square(int n);
// void _square(int* n);

// int main() {
//     int number = 4;
//     square(number);
//     printf("number = %d\n ", number);
//     _square(&number);
//     printf("number = %d\n", number);
//     return 0;
// }

// void square(int n) {
//     n = n * n;
//     printf("square = %d\n", n);
// }

// void _square(int* n) {
//     *n = (*n) * (*n);
//     printf("sqaure = %d\n", *n);
// }



// swap in pointers
// void swap(int a, int b);
// void _swap(int *a, int *b);

// int main() {
//     int x = 3, y = 5;
//     _swap(&x, &y);
//     printf("x = %d & y = %d\n", x, y);

//     return 0;
// }

// // call by referance
// void _swap(int *a, int *b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// // call by value
// void swap(int a, int b) {
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d & b = %d\n", a, b);
// }



// void printAddress(int *n);

// int main() {
//     int n = 4;
//     printAddress(&n);
//     printf("address of n is : %u\n", &n);
//     return 0;
// }

// void printAddress(int *n) {
//     printf("address of n is : %u\n", &n);
// }



// void dowork(int a, int b, int *sum, int *prod, int *avg);

// int main() {
//     int a = 3, b = 5;
//     int sum, prod, avg;
//     dowork(a, b, &sum, &prod, &avg);

//     printf("sum = %d, prod =%d, avg = %d\n", sum, prod, avg);

//     return 0;
// }

// void dowork(int a, int b, int *sum, int *prod, int *avg) {
//     *sum = a+b;
//     *prod = a*b;
//     *avg = (a+b) /2;
// }
