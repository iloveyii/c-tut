#include<stdio.h>

/**
This is a small program to demonstrate a linked list
**/
struct node {
    int value;
    struct node *next;
};
typedef struct node node_t; // shortcut for 'struct node'

void printlist(node_t *head) {
    node_t *temporary = head;
    while(temporary != NULL) {
        printf("%d - " , temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

int main(void) {


    node_t n1, n2, n3;
    node_t *head;

    n1.value = 10;
    n2.value = 20;
    n3.value = 30;

    // Make a list of them by linking
    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL; // end of linked list

    // print list
    printlist(head);

    return 0;
}


// RUN from cmd : g++ linked_list.c && ./a.out
