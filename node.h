#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "node.h"
using namespace std;

class Node{

private:
int data;
Node* next;


public:
Node(int x);
~Node();
void set_next(Node* node);
Node* get_next();
};

Node::Node(int x){
data = x;
next = nullptr;
}

Node::~Node(){
cout<<"Deleting node "<< data << endl;
}

void Node::set_next(Node* node){
next = node;
}

Node* Node::get_next(){
    return next;
}

#endif