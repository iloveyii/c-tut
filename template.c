#include<stdio.h>

/**
This is a small program to demonstrate all about template in short
**/
template <typename T>

T greater(T a, T b) {
    return a > b ? a : b;
}

int main(void) {
    printf("Greater between two integers a=%d and b=%d is %d \n", 7,3, greater(7,3));
    printf("Greater between two floats a=%0.2f and b=%0.2f is %0.2f \n", 7.1,30.2, greater(7.1,30.2));
    return 0;
}
