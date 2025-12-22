#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

/* Enqueue */
void enqueue(int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

/* Dequeue */
void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow\n");
    } else {
        struct node *temp = front;
        printf("Deleted element: %d\n", temp->data);
        front = front->next;

        if (front == NULL)
            rear = NULL;

        free(temp);
    }
}

/* Display */
void print() {
    struct node *temp = front;

    if (temp == NULL) {
        printf("Queue is empty\n");
    } else {
        printf("Queue (as list): ");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    print();

    dequeue();

    print();

    return 0;
}
