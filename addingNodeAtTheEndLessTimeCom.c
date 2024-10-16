#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

struct node * addNodeAtTheEnd(struct node *ptr, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (!temp)
    {
        printf("temp memory allocatin failed");
        return NULL;
    }
    
    temp ->data = data;
    temp ->link = NULL;

    ptr ->link = temp;
    return temp;

};

void printAllNodesData(struct  node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        printf(" ");
        ptr = ptr->link;
    };
};

struct node * insertNodeAtTheBeginning(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp ->data = data;
    temp ->link = head;
    head = temp;

    return temp;
};

void insertNodeAtcertainPos(struct node *head, int data, int poss)
{
    struct node *temp = malloc(sizeof(struct node));
    temp ->data = data;
    temp ->link = NULL;

    struct node *ptr = head;

    poss --;
    while(poss != 1)
    {
        ptr = ptr ->link;
        poss --;
    };

    temp ->link = ptr ->link;
    ptr ->link = temp;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head ->data = 10;
    head ->link = NULL;

    struct node *ptr = head;
    ptr = addNodeAtTheEnd(ptr,20);
    ptr = addNodeAtTheEnd(ptr,30);
    head = insertNodeAtTheBeginning(head,40);
    insertNodeAtcertainPos(head,50,4);
    ptr = head;
    if (ptr == NULL) printf("ptr link is Null");
    printAllNodesData(ptr);

    return 0;
}