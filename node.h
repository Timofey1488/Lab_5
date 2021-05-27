#ifndef NODE_H
#define NODE_H


template<typename T>
class Node
{
public:
    Node *pNext;
    Node *pPrev;
    T data;
    Node();
    Node(T data = T(), Node *pNext = nullptr, Node *pPrev = nullptr);
};


#endif // NODE_H
