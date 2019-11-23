#include <stdio.h>
#include <assert.h>

#include "queue.h"

int main(void) {

    Queue q = createQueue();
    
    enqueue(q, 10);
    enqueue(q, 100);
    enqueue(q, 1000);
    
    assert(dequeue(q) == 1000);
    assert(dequeue(q) == 100);
    
    enqueue(q, 20329804);
    enqueue(q, 432432);
        assert(dequeue(q) == 10);
        
    printf("success\n");
    return 0;
}
