#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// hardcoded linked list

int main()
{
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));

    (*node1).data = 12;
    (*node1).next = NULL;

    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));

    (*node2).data = 14;
    (*node2).next = node1;

    printf("data in headNode %d", (*node2).data);
    printf("data in next Node %d", (*(*node2).next).data);


    return 0;
}
