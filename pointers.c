#include<stdio.h>

int main(void) {
    // This is a pointer to int variable
    int x = 123;
    int * ptr = &x;

    printf("The value of x is: %d \n", x);
    printf("The value of x using ptr is : %d \n", *ptr);
    printf("The address of x is : %p \n", ptr);
}
