#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to add a new node at the beginning of the linked list
struct Node* addToFront(struct Node* head, int newData) {
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

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
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
//    head = addToFront(head, 3);
//    head = addToFront(head, 2);
//    head = addToFront(head, 1);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Free the memory allocated for the linked list
//    freeList(head);

    return 0;
}

