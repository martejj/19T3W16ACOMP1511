#include <stdio.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *newNode(int data);
void insert_at_end(struct overall *o, int data);

int main(void) {
    
    struct node *node1 = newNode(10);   
    struct node *node2 = newNode(15);
    struct node *node3 = newNode(20);
    
    node3->next = node1;
    
    node1->next = node2;
    
    printf("%d\n", node1->next->data);
    
    return 0;
}

struct node *newNode(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->next = NULL;
    new->data = data;
    return new;
}

void insert_at_end(struct overall *o, int data) {
    
}
