#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
struct Node* insertNode(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// Function to reverse the linked list
struct Node* reverseList(struct Node* head) {
    struct Node *prev, *current, *next;
    prev = NULL;
    current = head;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev; // The new head is the previous last node

    return head;
}

// Function to display the linked list
void displayList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function to test the reverse singly linked list implementation
int main() {
    struct Node* head = NULL;

    // Insert nodes into the linked list
    head = insertNode(head, 1);
    head = insertNode(head, 2);
    head = insertNode(head, 3);
    head = insertNode(head, 4);

    printf("Original Linked List: ");
    displayList(head);

    // Reverse the linked list
    head = reverseList(head);

    printf("Reversed Linked List: ");
    displayList(head);

    return 0;
}

