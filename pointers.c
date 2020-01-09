#include<stdio.h>

int main(void) {
    // This is a pointer to int variable
    int a;
    int * ptr;
    a = 10;
    ptr = &a;
    printf("The value of a is: %d \n", a);
    printf("The value of a using ptr is : %d \n", *ptr);
    printf("The address of a is : %p \n", ptr);
}
