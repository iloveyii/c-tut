#include<stdio.h>

/**
This is a small program to demonstrate all about pointers in short
**/
int main(void) {
    int x = 123;
    // This is a pointer to int variable
    int * ptr = &x;
    // & is address of operator - to get the memory location on any bucket
    // * is content of operator - to the value of location where address (ptr) is pointing

    printf("The content[x] of x is: %d \n", x);
    printf("The content[*ptr] of x using ptr is : %d \n", *ptr);
    printf("The address[ptr] of x is [804] : %p \n", ptr);

    // Save the bucket location of ptr
    int ** ptr2 = &ptr; // * star mean it is saving an address whose data type is int*
    printf("The address[ptr2] of ptr is [806] : %p \n", ptr2);
    // the first content of operator *ptr2 will give us content (of bucket) that is stored in it, ie address 806
    printf("The content[*ptr2] where *ptr2 is pointing to is (806) : %p \n", *ptr2);

    // The second content of operator **ptr2 will give us content (of bucket) that is stored at 804
    printf("The content[**ptr2] where ptr is pointing to is : %d \n", **ptr2);

}
