#include <stdio.h>
#include <stdlib.h>
// node whis contains data and address for next node.
struct Node
{
    int data;
    struct Node *next;
};
// this is a function which is traversing on each node of linked list & printing data pard
void traversLinkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("this is the data of the linked list : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;   // pointer
    struct Node *second; // pointer
    struct Node *third;  // pointer
    struct Node *forth;  // pointer
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    // linking one node to next node
    head->data = 4;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 6;
    third->next = forth;

    forth->data = 66;
    forth->next = NULL;

    // data printing function call
    traversLinkedList(head);
    return 0;
}