#include <stdio.h>

// int main() {
     
//     int marks[3];

//     printf("enter C : ");
//     scanf("%d", &marks[0]);

//     printf("enter PC : ");
//     scanf("%d", &marks[1]);

//     printf("enter HTML : ");
//     scanf("%d", &marks[2]);

//     printf("C = %d, PC = %d, HTML = %d", marks[0], marks[1], marks[2]);

//     return 0;
// }



// int main() {
//     float price[3];
//     printf("enter 3 prices : ");
//     scanf("%f", &price[0]);
//     scanf("%f", &price[1]);
//     scanf("%f", &price[2]);

//     printf(" total price 1 : %f\n", price[0]+(0.18*price[0]));
//     printf(" total price 2 : %f\n", price[1]+(0.18*price[1]));
//     printf(" total price 3 : %f\n", price[2]+(0.18*price[2]));

//     return 0;
// }



// int main() {
//     int aadhar[5];

//     int *ptr = &aadhar[0];
//     for(int i=0; i<5; i++) {
//         printf("%d index : ", i);
//         scanf("%d", &aadhar[i]);
//     }

//     for(int i=0; i<5; i++) {
//         printf("%d index = %d\n", i, aadhar[i]);
//     }
//     return 0;
// }



// void printNumbers(int*,int);

// int main() {
//     int arr[] ={1, 3, 3, 5, 6, 6};
//     printNumbers(arr, 6);
//     return 0;
// }

// void printNumbers(int *arr, int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }



//   2D array

// int main() {
    
//     int marks[2][3];
//     marks[0][0] = 79;
//     marks[0][1] = 45;
//     marks[0][2] = 38;

//     marks[1][0] = 75;
//     marks[1][1] = 64;
//     marks[1][2] = 94;

//     printf("%d", marks[0][2]);

//     return 0;
// }


//    count odd in array

// int countOdd(int arr[], int n);

// int main() {
//     int arr[] = {1, 3, 5, 4, 5,};
//     printf("%d", countOdd(arr, 5));
//     return 0;
// }

// int countOdd(int arr[], int n) {
//     int count = 0;
//     for(int i=0; i<n; i++) {
//         if(arr[i] % 2 != 0) {
//             count++;
//         }
//     }
//     return count;
// }



//     reverse in array

// int countOdd(int arr[], int n);
// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

// int main() {
//     int arr[] = {1, 3, 2, 4, 5};
//     reverse(arr, 5);
//     printArr(arr, 5);

//     return 0;
// }

// void printArr(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[], int n) {
//     for(int i=0; i<n/2; i++) {
//         int firstVal = arr[i];
//         int secondVal = arr[n-i-1];
//         arr[i] = secondVal;
//         arr[n-i-1] = firstVal;
//     }
// }



    // fibonacci number in array

    // int main() {
    //     int n;
    //     printf("enter n (n>2): ");
    //     scanf("%d", &n);

    //     int fib[n];
    //     fib[0] = 0;
    //     fib[1] = 1;
 
    //     for(int i=2; i<n; i++) {
    //         fib[i] = fib[i-1] + fib[i-2];
    //         printf("%d \t", fib[i]);
    //     }
    //     printf("\n");
    //     return 0;
    // }



    // void storeTable(int arr[][10], int n, int m, int number);

    // int main() {
    //     int tables[2][10];
    //     storeTable(tables, 0, 10, 2);
    //     storeTable(tables, 1, 10, 3);

    //     for(int i=0; i<10; i++) {
    //         printf("%d\t", tables[0][i]);
    //     }

    //     printf("\n");

    //     for(int i=0; i<10; i++) {
    //         printf("%d\t", tables[0][i]);
    //     }

    //     return 0;
    // }

    // void storeTable(int arr[][10], int n, int m, int number) {
    //     for(int i=0; i<m; i++) {
    //         arr[n][i] = number * (i+1);
    //     }
    // }