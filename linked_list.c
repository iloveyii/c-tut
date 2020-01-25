#include<stdio.h>
#include <stdlib.h>

/**
This is a small program to demonstrate a linked list
**/
struct node {
    int value;
    struct node *next;
};
typedef struct node node_t; // shortcut for 'struct node'

node_t *create_new_node(int value) {
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}


void printlist(node_t *head) {
    node_t *temporary = head;
    while(temporary != NULL) {
        printf("%d - " , temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *add_new_node(node_t *head, int value) {
    node_t *tmp = create_new_node(value);
    tmp->next = head;
    head = tmp;
    return head;
}

int main(void) {
    node_t n1, n2, n3;
    node_t *head, *tmp;
    head = NULL;

    head = create_new_node(10);

    tmp = create_new_node(20);
    tmp->next = head;
    head = tmp;

/*
    n1.value = 10;
    n2.value = 20;
    n3.value = 30;

    // Make a list of them by linking
    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL; // end of linked list
*/
    // print list
    printlist(head);

    return 0;
}


// RUN from cmd : g++ linked_list.c && ./a.out
