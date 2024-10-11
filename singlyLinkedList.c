
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
        printf("%d", ptr->data);
        ptr = ptr->link;
        printf("\n");
    }

}

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
    countNumOfNodes(head);
    
    return 0;
}