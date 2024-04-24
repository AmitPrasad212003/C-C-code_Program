#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list in reverse order
void printListReverse(struct Node* head) {
    // Base case: if the list is empty
    if (head == NULL) {
        return;
    }

    // Recursive call to print the rest of the list in reverse order
    printListReverse(head->next);

    // Print the data of the current node
    printf("%d -> ", head->data);
}

// Function to add a new node at the beginning of the linked list
struct Node* insertAtFront(struct Node* head, int newData) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Check if memory allocation is successful
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Set the data for the new node
    newNode->data = newData;

    // Set the next pointer of the new node to the current head
    newNode->next = head;

    // Update the head to point to the new node
    head = newNode;

    return head;
}

// Function to free the memory allocated for the linked list
void freeList(struct Node* head) {
    struct Node* current = head;
    struct Node* nextNode;

    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Add elements to the front of the linked list
    head = insertAtFront(head, 3);
    head = insertAtFront(head, 2);
    head = insertAtFront(head, 1);

    // Print the original linked list
    printf("Original Linked List: ");
    printListReverse(head);
    printf("NULL\n");

    // Free the memory allocated for the linked list
    freeList(head);

    return 0;
}

