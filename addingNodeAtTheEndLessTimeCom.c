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

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head ->data = 10;
    head ->link = NULL;

    struct node *ptr = head;
    ptr = addNodeAtTheEnd(ptr,20);
    ptr = addNodeAtTheEnd(ptr,30);
    ptr = head;
    if (ptr == NULL) printf("ptr link is Null");
    printAllNodesData(ptr);

    return 0;
}