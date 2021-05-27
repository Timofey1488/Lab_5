#ifndef STACK_H
#define STACK_H
#include "node.h"

template<class T>
class Queue
{
public:
    Queue();
    Node<T> *Head();
    Node<T> *Tail();
    virtual void pop_front();
    virtual bool isEmpty();
    virtual void push_back(T data);
private:
    Node<T> *head;
    Node<T> *tail;
    int size=0;
};

#endif // QUEUE_H
