# Tutorial 8 notes

## Any questions from this week's lectures?

* This week we will cover **more** structs, **more** pointers, **malloc**, and **linked lists**.
* Assignment 1 has been released to tutors and we will have it marked soon.
* Assignment 2 spec is out - make sure to read it at least 2x before starting and 3x before asking for help.
* New lab partners!
* Code review for `species_count.c` any volunteers?
* This lab is very much self guided.

## What is malloc? 

<details>

<summary>Answer</Summary>

Malloc creates space on the computer away from the 'stack' which is memory that is constantly being overwritten when you enter and exit functions.

</details>

## How can we improve our `pet.c` code from last week?

<details>

<summary>Answer</Summary>

We could create a newPet function - but we will need malloc!

</details>

## Can we improve this code more? What is a typedef?

## Code review!

## What is a linked list? How does it compare to an array and a string?

<details>

<summary>Answer</Summary>

|                    | Array                  | String            | Linked List      |
|--------------------|------------------------|-------------------|------------------|
|Length              |Constant                |Constant           |Variable          |
|Determine Length by |Extra variable e.g. `n` |Ends with `'\0'`   |Ends with `NULL`  |
|Stored              |Contiguously            |Contiguously       |Randomly in memory|
|Loop through using  |Indexes                 |Indexes or pointers|Pointers          |

List visualisation: https://visualgo.net/en/list

![Memory in c](/images/memory.jpg)

</details>

## What is the structure of a linked list?

### Given a linked list with the following structures:

```c

    struct overall {
        struct node *start;
    };

```
```c
    struct node {
        int data;
        struct node *next;
    };
```

where start points at the first node of the list:

* What does the overall struct look like in memory? What is its purpose?
* What does the node struct look like in memory? What is its purpose?
* What does the malloc function do? How could you use it to allocate memory for a single struct node?
* Write a function called new_node that creates a new node with the specified data value:
```c
struct node *new_node(int data);
```
* Write a function called insert_at_end that uses your new_node function to create a node, and then inserts that node at the end of the linked list.
```c
void insert_at_end(struct overall *o, int data);
```

<details>

<summary>Answer</summary>

The head is the first element in the linked list, the tail is the last element in the linked list. In general we also refer to the node we are currently pointing to in a linked list the 'curr' node as it is a good habit to always keep the head node pointing to the head of the linked list.

</details>

## What is a Realm and a Location? How are they used and how do they relate to each other? Hint: run `1511 setup-pokedex`


### Kahoot: https://create.kahoot.it/share/duplicate-of-comp1511-week-6/cfd5f6dc-4cb5-43fd-b6d4-4ff28bdc4904