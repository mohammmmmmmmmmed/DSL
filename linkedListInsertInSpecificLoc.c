#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* nextNode;
};

struct LinkedList {
    struct Node* head;
};

void insert(struct LinkedList* ls, int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->nextNode = NULL;

    if (ls->head == NULL) {
        ls->head = node;
        return;
    }

    struct Node* tempNode = ls->head;
    while (tempNode->nextNode != NULL) {
        tempNode = tempNode->nextNode;
    }

    tempNode->nextNode = node;
}

void insertNth(struct LinkedList* ls, int data, int position) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->nextNode = NULL;

    if (ls->head == NULL) {
        if (position != 0) {
            return;
        } else {
            ls->head = node;
        }
    }

    if (ls->head != NULL && position == 0) {
        node->nextNode = ls->head;
        ls->head = node;
        return;
    }

    struct Node* current = ls->head;
    struct Node* previous = NULL;
    int i = 0;

    while (i < position) {
        previous = current;
        current = current->nextNode;

        if (current == NULL) {
            break;
        }

        i++;
    }

    node->nextNode = current;
    previous->nextNode = node;
}

void print(struct LinkedList* ls) {
    if (ls->head == NULL) {
        return;
    }
    struct Node* tempNode = ls->head;
    while (tempNode != NULL) {
        printf("%d->", tempNode->data);
        tempNode = tempNode->nextNode;
    }
    printf("NULL\n");
}

int main() {
int i, size, el, pos;
    struct LinkedList ls;
    ls.head = NULL;
    printf("Enter size: ");
    scanf("%d", &size);
    for(i=0; i<size; i++) {
    	printf("Enter element: ");
    	scanf("%d", &el);
    	insert(&ls, el);
    }
    print(&ls);
    printf("Enter element to be inserted: ");
    scanf("%d", &el);
    printf("Enter position in which it is to be inserted: ");
    scanf("%d", &pos);
    pos--;
    	
    insertNth(&ls, el, pos);
    print(&ls);

    return 0;
}
