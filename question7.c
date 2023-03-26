

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#define MAX 5

struct q
{
int data;
};

struct q queue[MAX];
int front=-1;
int rear=-1;
int count=0;

void enqueue(int data)
{
    if (count==MAX)
    {
        printf("\nQueue is full\n");
        return;
    }
    else if (front == -1 && rear==-1)
    {
        front = rear = 0;
    }
    else
        rear++;
   
        queue[rear%MAX].data = data;
    count++;
}

void dequeue()
{
    if (count==0)
    {
        printf("\nQueue is empty\n");
        return;
    }
    
    printf("the deleted element is: %d\n",queue[front%MAX].data);
        front++;
        count--;
}

void display()
{
    if (count==0)
    {
        printf("\nQueue is Empty!!!\n");
        return;
    }
    printf("\nQueue elements: ");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i%MAX].data);
    }
}

int main()
{
    int choice, value;
   
    while (1)
    {
        printf("\n\n*** MENU ***\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
             dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong selection!!! Please try again!!!\n");
        }
    }
}
