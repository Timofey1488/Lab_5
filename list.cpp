#include "list.h"
#include "node.cpp"

template<class T>
List<T>::List()
{
    size = 0;
    head = nullptr;
    tail = nullptr;
}

template<class T>
Node<T> *List<T>::Head()
{
    if(size==0)
        return nullptr;
    return head;
}

template<class T>
Node<T> *List<T>::Tail()
{
    return tail;
}

template<class T>
void List<T>::push_back(T data_t)
{
    Node<T> *temp = new Node<T>(data_t);
    if(head == nullptr)
    {
        head = temp;
        tail = temp;
        temp->pNext = tail;
        temp->pPrev = tail;
    }
    else
    {
        tail->pNext= temp;
        temp->pPrev = tail;
        temp->pNext = head;
        head->pPrev = tail;
        tail = temp;
    }
    size++;
}

template<class T>
bool List<T>::isEmpty()
{
    if(size ==0)
    {
        return true;
    }
    else return false;
}

template<class T>
void List<T>::pop_front()//delete the fistr element
{
       Node<T> *temp = head;
       head = head->pNext;
       delete temp;
       size--;
}

template<class T>
int List<T>::GetSize()
{
   return size;
}




