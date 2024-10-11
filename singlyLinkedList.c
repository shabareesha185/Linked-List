
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void countNumOfNodes(struct node *head){
    if (head == NULL) printf("No nodes to count");
    struct node *ptr = head;
    int cnt = 0; //count

    while (ptr != NULL)
    {
        cnt++;
        ptr = ptr->link;
    }
    printf("%d", cnt);
};

void printNodesData(struct node *head){
    if (head == NULL) printf("No nodes to count");
    struct node *ptr = head;
    int cnt = 0; //count

    while (ptr != NULL)
    {
        printf("%d", ptr ->data);
        printf("\n");
        ptr = ptr->link;
    }
};

void insertAtTheEnd(struct node *head, int data){

    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp -> data = data; // assigning data
    temp -> link = NULL;

    while(ptr->link != NULL){
        ptr = ptr ->link;
    }
    ptr ->link = temp;
};

int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head ->data = 45;
    head ->link = NULL;

    struct node *crnt = malloc(sizeof(struct node));
    crnt->data = 50;
    crnt->link = NULL;
    head ->link = crnt;

    crnt = malloc(sizeof(struct node));
    crnt->data = 55;
    crnt ->link = NULL;
    head ->link->link = crnt;

    // printf("%d", crnt ->data \n);
    // countNumOfNodes(head);
    insertAtTheEnd(head,60);
    printNodesData(head);
    
    return 0;
}