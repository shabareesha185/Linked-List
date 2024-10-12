#include <stdio.h>
#include <stdlib.h>

// Define a struct for a node in the linked list
struct node {
    int data;            // Data stored in the node
    struct node *link;   // Pointer to the next node in the list
};

// Function to count the number of nodes in the linked list
void countNumOfNodes(struct node *head) {
    // Check if the head is NULL (list is empty)
    if (head == NULL) {
        printf("No nodes to count");
        return; // Exit the function early if the list is empty
    }
    
    struct node *ptr = head; // Pointer to traverse the list
    int cnt = 0; // Variable to count nodes

    // Traverse the list until the end
    while (ptr != NULL) {
        cnt++; // Increment count for each node
        ptr = ptr->link; // Move to the next node
    }
    printf("%d", cnt); // Print the total count of nodes
}

// Function to print the data of each node in the linked list
void printNodesData(struct node *head) {
    // Check if the head is NULL (list is empty)
    if (head == NULL) {
        printf("No nodes to count");
        return; // Exit the function early if the list is empty
    }

    struct node *ptr = head; // Pointer to traverse the list

    // Traverse the list until the end
    while (ptr != NULL) {
        printf("%d", ptr->data); // Print the data of the current node
        printf("\n"); // Print a newline for formatting
        ptr = ptr->link; // Move to the next node
    }
}

// Function to insert a new node at the end of the linked list
void insertAtTheEnd(struct node *head, int data) {
    struct node *ptr, *temp; // Pointers for traversal and new node
    ptr = head; // Start from the head
    temp = malloc(sizeof(struct node)); // Allocate memory for the new node
    temp->data = data; // Assign data to the new node
    temp->link = NULL; // Set the next link to NULL (new node is at the end)

    // Traverse to the last node
    while (ptr->link != NULL) {
        ptr = ptr->link; // Move to the next node
    }
    ptr->link = temp; // Link the last node to the new node
}

int main() {
    // Create the head node of the linked list
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45; // Assign data to the head node
    head->link = NULL; // Initialize the link to NULL

    // Create second node
    struct node *crnt = malloc(sizeof(struct node));
    crnt->data = 50; // Assign data to the second node
    crnt->link = NULL; // Initialize the link to NULL
    head->link = crnt; // Link the head to the second node

    // Create third node
    crnt = malloc(sizeof(struct node));
    crnt->data = 55; // Assign data to the third node
    crnt->link = NULL; // Initialize the link to NULL
    head->link->link = crnt; // Link the second node to the third node

    // Insert a new node with data 60 at the end of the list
    insertAtTheEnd(head, 60);
    // Print the data of all nodes in the list
    printNodesData(head);
    
    return 0; // Return success
}
