#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
   char data;
    struct node* link;
} Node;

Node* head = NULL;
Node* previous = NULL;

int main(void)
{
    ll();

    print();

    return 0;
}

int ll()
{
    int data = 0;
    while(1)
    {
        printf("Enter data, -1 to stop: ");
        scanf("%d", &data);

        if(data == -1)
            break;

        addtoll(data);
    }
}

int addtoll(int data)
{
    Node* ptr = NULL;

    ptr = (Node*)malloc(sizeof(Node));
    ptr->data = data;
    ptr->link = NULL;

    if(head == NULL)
        head = ptr;
    else
        previous->link = ptr;

    previous = ptr;
}

int print()
{
    printf("Printing linked list contents: ");
    Node* ptr = head;

    while(ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}