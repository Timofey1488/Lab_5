#ifndef LIST_H
#define LIST_H
#include "node.h"
#include "queue.h"
#include "queue.cpp"

template<class T>
class List: public Queue<T>
{
public:
    List();
    int GetSize();
    Node<T> *Head();
    Node<T> *Tail();
    bool isEmpty();
    void pop_front();
    void push_back(T data);

private:
   Node<T> *tail;
   Node<T> *head;
   int size = 0;
};

#endif // LIST_H
