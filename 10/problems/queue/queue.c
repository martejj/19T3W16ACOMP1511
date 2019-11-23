#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

struct node {
    struct node *next;
    int data;
};

struct queue {
    struct node *head;
};

static struct node *createNode(int data);
static void deleteNode(struct node *n);

Queue createQueue() {
    Queue q = malloc(sizeof(struct queue));
    q->head = NULL;
    return q;
}

void enqueue(Queue q, int data) {
    if (q == NULL) {
        return;
    }    
    
    struct node *new = createNode(data);
    
    new->next = q->head;
    q->head = new;
    
}

int dequeue(Queue q) {

    struct node *curr = q->head;
    
    if (curr == NULL) {
        return -1;
    }
    
    if (curr->next == NULL) {
        int value = curr->data;
        deleteNode(curr);
        q->head = NULL;
        return value;
    }
    
    while (curr->next->next != NULL) {
        curr = curr->next;
    }
    
    int value = curr->next->data;
    deleteNode(curr->next);
    curr->next = NULL;
    return value;
}

void printQueue(Queue q) {

}

void destroyQueue(Queue q) {
    
}

static struct node *createNode(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    
    return new;
}

static void deleteNode(struct node *n) {
    free(n);
}







