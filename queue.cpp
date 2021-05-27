#include "queue.h"
#include "node.h"

template<class T>
Queue<T>::Queue()
{
    size = 0;
    head = nullptr;
    tail = nullptr;
}

template<class T>
Node<T> *Queue<T>::Tail()
{
  return tail;
}

template<class T>
Node<T> *Queue<T>::Head()
{
  return head;
}

template<class T>
void Queue<T>::pop_front()//delete the fistr element
{
       Node<T> *temp = head;
       head = head->pNext;
       delete temp;
       size--;
}


template<class T>
void Queue<T>::push_back(T data)//add element in the end of list
{
    if(head ==nullptr)
    {
        head = new Node<T>(data);
        tail =head;
    }
    else
    {
        Node<T> *current = this->head;
        while(current->pPrev !=nullptr)
        {
            current = current->pPrev;
        }
        current->pPrev = new Node<T>(data);
        tail = current->pPrev;
    }
}
template<class T>
bool Queue<T>::isEmpty()
{
    if(size ==0)
    {
        return true;
    }
    else return false;
}

