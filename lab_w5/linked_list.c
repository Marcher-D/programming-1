#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

// insert a node with data to the end of the list
void push_back(struct Node * head, int data)
{
    struct Node *new_node=malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->next=NULL;

    struct Node *current=head;
    while (current->next!=NULL) {
        current=current->next;
    }
    current->next=new_node;
}

struct Node * toLinkedList(int * data_arr, int N)
{
    struct Node * head = malloc(sizeof(struct Node));
    head->data=data_arr;

    for (int i=0; i<N; i++) {
        push_back(head, data_arr[i]);
    }

    return head;
}


int * getData(struct Node * head)
{
    int *out = NULL;
    int size = 0;

    while (/* condition */)
    {
        size ++;
        out = realloc(out, size * sizeof(int));
        /* code */
    }

    return out;
}


int main()
{
    int arr[] = {1, 4, 3, 7, 6};
    struct Node * linked_list = toLinkedList(arr, 5);

    return 0; // set break point
}

