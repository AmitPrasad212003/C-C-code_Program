#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to add a new node at a specified position in the linked list
struct Node* insertAtPosition(struct Node* head, int newData, int position) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Check if memory allocation is successful
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Set the data for the new node
    newNode->data = newData;

    // If the position is 0, insert at the beginning
    if (position == 0) {
        newNode->next = head;
        head = newNode;
    } else {
        // Traverse the list to find the node before the specified position
        struct Node* current = head;
        int currentPosition = 0;
        while (current != NULL && currentPosition < position - 1) {
            current = current->next;
            currentPosition++;
        }

        // Check if the specified position is valid
        if (current == NULL) {
            printf("Invalid position.\n");
            free(newNode);
            exit(EXIT_FAILURE);
        }

        // Insert the new node at the specified position
        newNode->next = current->next;
        current->next = newNode;
    }

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

    // Add elements at various positions in the linked list
    head = insertAtPosition(head, 1, 0); // Add 1 at position 0 (beginning)
    head = insertAtPosition(head, 3, 1); // Add 3 at position 1
    head = insertAtPosition(head, 2, 1); // Add 2 at position 1

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Free the memory allocated for the linked list
    freeList(head);

    return 0;
}

