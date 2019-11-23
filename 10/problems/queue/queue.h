
typedef struct queue *Queue;

Queue createQueue();

void enqueue(Queue q, int data);

int dequeue(Queue q);

void printQueue(Queue q);

void destroyQueue(Queue q);
