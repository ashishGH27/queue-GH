// queue_code.c
// Queue implementation in C using arrays

#include <stdio.h>
#define MAX 5  // maximum size of queue

int queue[MAX];
int front = -1, rear = -1;

// Function to insert an element into the queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) front = 0; // set front to 0 if inserting first element
        rear++;
        queue[rear] = value;
        printf("Enqueued %d into queue.\n", value);
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Cannot dequeue.\n");
    } else {
        printf("Dequeued %d from queue.\n", queue[front]);
        front++;
    }
}

// Function to view the front element
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! Nothing to peek.\n");
    } else {
        printf("Front element is %d\n", queue[front]);
    }
}

// Function to display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Current Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    peek();
    dequeue();
    display();
    return 0;
}