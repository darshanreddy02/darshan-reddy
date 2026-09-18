#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    int value;
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = top;
    top = newnode;

    printf("Element pushed successfully.\n");
}

void pop()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }

    temp = top;
    printf("Deleted element: %d\n", top->data);

    top = top->next;
    free(temp);
}

void display()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }

    temp = top;

    printf("Stack elements are:\n");

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

