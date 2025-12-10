#include <iostream>
#include "queue.h"
using namespace std;

int main() {

    Queue q;

    cout << "Enqueue 10" << endl;
    q.enqueue(10);

    cout << "Enqueue 20" << endl;
    q.enqueue(20);

    cout << "Enqueue 30" << endl;
    q.enqueue(30);

    cout << "\nDequeuing elements..." << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();


    return 0;
}