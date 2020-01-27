#include <iostream>

using namespace std;

class Vector {
    private:
        struct node {
            int index = 0;
            int value;
            struct node *next;
        };
        typedef struct node node_t; // shortcut for 'struct node'
        node_t *head = NULL;

        node_t *create_new_node(int value) {
            node_t *new_node = (node_t *) malloc(sizeof(node_t));
            new_node->value = value;
            new_node->next = NULL;
            return new_node;
        }

    public:
        void Vector2() {
        }

        void display() {
            cout << "The vector elements are : \n";
            node_t *temporary = head;
            while(temporary != NULL) {
                printf("[%d]=%d : " , temporary->index, temporary->value);
                temporary = temporary->next;
            }
            printf("\n");
        }

        void add(int value) {
            node_t *tmp = create_new_node(value);
            tmp->next = head;
            if(head != NULL) tmp->index = head->index + 1;
            head = tmp;
        }

        int front() {
            if(head != NULL) {
                return head->value;
            }
            return 0;
        }

        int back() {
            if(head == NULL) {
                return 0;
            }

            node_t *current = head;
            while(current->next != NULL) {
                current = current->next;
            }
            return current->value;
        }

        int at(int index) {
            if(head == NULL) {
                return 0;
            }

            int counter = 0;
            node_t *current = head;
            index = head->index - index;

            while(current->next != NULL) {
                if(counter == index) {
                    break;
                }
                current = current->next;
                counter++;
            }

            if(counter == index) {
                return current->value;
            }
            return 0;
        }

        int find(int value) {
            if( head != NULL) {
                node_t *current = head;
                while(current->next != NULL) {
                    if(current->value == value) {
                        return current->value;
                    }
                    current = current->next;
                }
            }
            // Node not found
            return 0;
        }

};

int entry() {
    Vector v;
    int value;
    // Scan a few integers
    while(1) {
        printf("Enter an integer (0 to exit) : ");
        scanf("%d", &value);

        if(value == 0) {
            v.display();
            break;
        } else {
            v.add(value);
        }
    }

    for(int i = 0; i < 9999999; i++) {
        v.add(i);
    }

    printf("Enter an index for at function: ");
    scanf("%d", &value);

    cout << "The front element is " << v.front() << endl;
    cout << "The back element is " << v.back() << endl;
    cout << "The at(" << value << ") element is " << v.at(value) << endl;

    printf("Enter a value to find : ");
    scanf("%d", &value);
    cout << "The find node is " << v.find(value) << endl;

    return 0;
}

int main(void) {
    Vector v;
    v.add(3);
    v.add(4);
    v.add(6);
    v.add(5);
    v.display();

    cout << "The front element is " << v.front() << endl;
    cout << "The back element is " << v.back() << endl;
    cout << "The at element is " << v.at(1) << endl;

    entry();

    return 0;
}
// RUN from cmd : g++ vector.cpp && ./a.out
