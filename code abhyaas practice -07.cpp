//code abhyaas basics -- 05

// to remove duplicates


#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
void insertNode(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to remove duplicates from the sorted linked list
void removeDuplicates(struct Node* head) {
    if (head == NULL) {
        return;
    }
    struct Node* current = head;
    struct Node* temp;
    struct Node* nextDistinct;
    while (current->next != NULL) {
        if (current->data == current->next->data) {
            nextDistinct = current->next->next;
            temp=current->next;
            current->next = nextDistinct;
            free(temp);
        } else {
            current = current->next;
        }
    }
}

// Function to print the linked list
void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Inserting elements into the linked list
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 20);
    insertNode(&head, 20);
    insertNode(&head, 30);
    insertNode(&head, 40);
    insertNode(&head, 50);
    insertNode(&head, 50);

    printf("Original Linked List: ");
    displayList(head);

    // Removing duplicates from the linked list
    removeDuplicates(head);

    printf("Linked List after removing duplicates: ");
    displayList(head);

    // Freeing the memory occupied by the linked list
    struct Node* current = head;
    struct Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}

