#include "node.h"

template<class T>
Node<T>::Node()
{

}

template<class T>
Node<T>::Node(T data, Node *pNext, Node *pPrev)
{
        this->pNext = pNext;
        this->pPrev = pPrev;
        this->data = data;

}
