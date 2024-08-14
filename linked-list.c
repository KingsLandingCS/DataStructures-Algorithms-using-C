#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // global variable, can be accessed anywhere
void Insert(int x)
{
    Node *temp = (Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (head != NULL)
        temp->next = head;
    head = temp;
}

void printf()
{
    struct Node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}
void Print() int main()
{
    head = NULL; // empty
    printf("How many numbers?\n");
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &x);
        Insert(x);
        Printf();
    }
}