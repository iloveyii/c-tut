#include<stdio.h>
#include <stdlib.h>
#define ASC_ORDER false // mean last node at end
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

    if(ASC_ORDER == false) {
        // head printed first
        tmp->next = head;
        head = tmp;
        return head;
    }

    // head printed last
    if( head != NULL) {
        node_t *last = head;
        while(last->next != NULL) {
            last = last->next;
        }
        last->next = tmp;
        return head;
    }
    // This was first node
    return tmp;
}

int main(void) {
    node_t *head = NULL;
    int value = 0;

    while(1) {
        printf("Enter an integer (0 to exit) : ");
        scanf("%d", &value);

        if(value == 0) {
            // print list
            printlist(head);
            break;
        } else {
            head = add_new_node(head, value);
        }
    }


    return 0;
}


// RUN from cmd : g++ linked_list.c && ./a.out
