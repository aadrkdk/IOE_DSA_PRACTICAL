/*
    Description: Linear Queue Implementation using array in C.
*/
#include <stdio.h>
#include <stdlib.h>

#define maxsixze 4
int rear = -1;
int front = 0;
int item;
int queue[maxsixze];

void enqueue();
void dequeue();
void displayall();
void display_front();

int main()
{
    printf("\n\t\tQUEUE IMPLEMENTATION USING ARRAY IN C \n");

    int choice = 0;
    do
    {
        printf(" 1. Enqueue\n");
        printf(" 2. Dequeue\n");
        printf(" 3. Display elements\n");
        printf(" 4. Display front element\n");
        printf(" 5. Exit\n");
        printf(" Enter a choice(1 - 5): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            displayall();
            break;
        case 4:
            display_front();
            break;
        case 5:
            exit(1);
        default:
            printf("\n Enter the valid choice: \n");
            break;
        }
    } while (choice != 5);
    return 0;
}

// this function is used to enqueue(add element to the queue).
void enqueue()
{
    if (rear >= maxsixze - 1)
        printf(" Queue is full(overflow)\n");
    else
    {
        rear++; // rear = rear + 1
        printf(" Enter an element to enqueue: ");
        scanf("%d", &item);
        queue[rear] = item;
    }
}

// this function is used to dequeue(remove element from the queue).
void dequeue()
{
    if (front > rear)
        printf(" Queue is empty(underflow)\n");
    else
    {
        item = queue[front];
        printf(" %d is dequeued.\n", item);
        front++;
    }
}

// this function is used to display all elements of the queue
void displayall()
{
    if (front > rear)
        printf(" No element in queue.\n");
    else
    {
        printf(" All elements of queue are: \n");
        for (int i = front; i <= rear; i++)
            printf(" %d \t", queue[i]);
        printf("\n");
    }
}

// this function is used to display the front element from queue
void display_front()
{
    if (front > rear)
        printf(" No element in queue\n");
    else
        printf(" Front element: %d\n", queue[front]);
}