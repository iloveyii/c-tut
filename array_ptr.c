#include<stdio.h>

/**
This is a small program to demonstrate all about arrays and its pointers in short
**/

#define MAX 3
int main(void) {
    int counter = 0;
    int A[MAX] = {11,22,33};
    // This is a pointer to the array
    int * ptr = &A[0]; // or simply A

    // Iterate over array
    for( counter = 0; counter < MAX; counter++) {
        printf("Element at index %d is %d \n", counter, A[counter]);
    }

    printf("First element of A is %d \n", A[0]);
    printf("First element of A where ptr is pointing to is %d \n", *ptr);

    printf("Second element of A is %d \n", A[1]);
    printf("Second element of A is %d \n", *(ptr + 1));
}
