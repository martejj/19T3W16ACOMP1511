#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    int data;
    struct node *next;
};

struct node *copy(struct node *head) {
    if (head == NULL) {
        return NULL;
    }
    struct node *new_head = malloc(sizeof (struct node));
    assert(new_head);
    new_head->data = head->data;

    struct node *last_new_node = new_head;
    struct node *p = head->next;

    while (p != NULL) {
        last_new_node->next = malloc(sizeof (struct node));
        last_new_node = last_new_node->next;
        assert(last_new_node != NULL);
        last_new_node->data = p->data;
        p = p->next;
    }
    last_new_node->next = NULL;

    return new_head;
}

int identical(struct node *head1, struct node *head2) {
    struct node *p1 = head1;
    struct node *p2 = head2;

    while (p1 != NULL && p2 != NULL) {
        if (p1->data != p2->data) {
            return 0;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    return p1 == p2;
}

int ordered(struct node *head) {
    if (head == NULL || head->next == NULL) {
        return 1;
    }
    struct node *p = head;
    while (p->next->next != NULL) {
        if (p->data >= p->next->data) {
            return 0;
        }
    }
    return 1;
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *set1, struct node *set2) {
    if (set1 == NULL || set2 == NULL) {
        return NULL;
    }
    if (set1->data == set2->data) {
        struct node *new_head = malloc(sizeof (struct node));
        assert(new_head != NULL);
        new_head->data = set1->data;
        new_head->next = set_intersection(set1->next, set2->next);
        return new_head;
    } else if (set1->data < set2->data) {
        return set_intersection(set1->next, set2);
    } else {
        return set_intersection(set1, set2->next);
    }
}

// given two linked lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// no duplicates (only include them once)
struct node *set_union(struct node *set1, struct node *set2) {
    if (set1 == NULL && set2 == NULL) {
        return NULL;
    }
    struct node *new_head = malloc(sizeof (struct node));
    assert(new_head != NULL);
    if (set1 != NULL && set2 != NULL && set1->data == set2->data) {
        new_head->data = set1->data;
        new_head->next = set_union(set1->next, set2->next);
    } else if (set2 == NULL || (set1 != NULL && set1->data < set2->data)) {
        new_head->data = set1->data;
        new_head->next = set_union(set1->next, set2);
    } else {
        new_head->data = set2->data;
        new_head->next = set_union(set1, set2->next);
    }
    return new_head;
}

// =================================

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = dat;
    new->next = NULL;

    return new;
}

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}