
#include "priorityqueue.h"

// TEST(priorityqueue, one) {
//     // TO DO: write lots of assertions here.
// }

// TO DO: write lots of tests here.
int main() {
    priorityqueue<string> pq;
    

    pq.enqueue("Alex", 1);
    pq.enqueue("John", 8);
    pq.enqueue("Daniel", 2);
    pq.enqueue("Martin", 9);
    pq.enqueue("Pedro", 5);

    pq.printInOrder();
}

