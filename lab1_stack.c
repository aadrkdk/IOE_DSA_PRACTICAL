/*
    Description: Menu based program to show how Stack is implemented using Array.
*/
#include <stdio.h>
#include <stdlib.h>

#define maxsize 10
int top = -1;
int stack[maxsize];
int item;

void push();        // adds an element on stack
void pop();         // removes element from stack
void display();     // shows all the items of stack
void display_tos(); // shows the mostly recently added item from the stack

int main()
{
    printf("\n\tStack Implementation Using Array\n\n");
    int choice = 0;
    do
    {
        printf(" Chose an option (1 - 5):\n");
        printf(" 1. Push\n");
        printf(" 2. Pop\n");
        printf(" 3. Display elements\n");
        printf(" 4. Display top of stack\n");
        printf(" 5. Exit\n");
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
            display_tos();
            break;
        case 5:
            exit(1);
        default:
            printf(" Enter valid option.\n");
            break;
        }

    } while (choice != 5);
    return 0;
}

void push()
{
    if (top == maxsize - 1)
        printf(" Stack is full!(overflow)\n");
    else
    {
        printf(" Enter a number to push on stack: ");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
}

void pop()
{
    if (top == -1)
        printf(" Stack is empty(underflow)\n");
    else
    {
        item = stack[top];
        printf("\n %d is popped.\n", item);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
        printf(" No element on stack.\n");
    else
    {
        printf(" Stack elements are: \n");
        for (int i = top; i >= 0; i--)
            printf(" %d\n", stack[i]);
        printf("\n");
    }
}

void display_tos()
{
    if (top == -1)
        printf(" No element on stack.\n");
    else
        printf(" Item at top of stack: %d\n", stack[top]);
}