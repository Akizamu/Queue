#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "node.h"
using namespace std;

class Queue{
private:
Node* head;
Node* tail;
int size;

public:
Queue();
~Queue();
void dequeue();
void enqueue(int x);
};

Queue::Queue(){
size =  0;
head = nullptr;
tail = nullptr;
}

Queue::~Queue(){
while(size != 0){
dequeue();
}
}

void Queue::dequeue(){
if(size > 0){
Node* temp = head;
head = head->get_next();
delete temp;
size --;
} else{
cout<<"Queue is empty " << endl;
}
}

void Queue::enqueue(int x){

Node* newNode = new Node(x);
    if (size == 0){
    head = newNode;
    tail = newNode;

}else{

    tail -> set_next(newNode);
    tail = newNode;

}
size ++;
}
#endif