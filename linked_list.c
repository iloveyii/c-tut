#include <stdio.h>
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

node_t *find_node_by_value(node_t *head, int value) {
    if( head != NULL) {
        node_t *current = head;
        while(current->next != NULL) {
            if(current->value == value) {
                return current;
            }
            current = current->next;
        }
    }
    // Node not found
    return NULL;
}

node_t *front(node_t *head) {
    if(head != NULL) {
        if(ASC_ORDER == false) {
            return head;
        } else {
            node_t *current = head;
            while(current->next != NULL) {
                current = current->next;
            }
            return current;
        }
    }

    return NULL;
}

int main(void) {
    node_t *head = NULL;
    int value = 0;

    // Scan a few integers
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

    printf("Enter an integer to search : ");
    scanf("%d", &value);
    node_t *searched = find_node_by_value(head, value);
    printf("The searched node is : %d \n", searched == NULL ? -1 : searched->value);

    node_t *front_node = front(head);
    printf("The front node is : %d \n", front_node == NULL ? -1 : front_node->value);

    return 0;
}


// RUN from cmd : g++ linked_list.c && ./a.out
