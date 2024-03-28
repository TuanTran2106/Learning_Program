#ifndef TEMPLATE_H_INCLUDED
#define TEMPLATE_H_INCLUDED

#include<iostream>
using namespace std;

template<class T>
class CreateList
{
private:
    int size;
    int top;
    T *a;
public:
    CreateList(int size);
    ~CreateList();
    void Push(T item) ;
    bool isEmpty() const;
    bool isFull() const;
    T Pop();
};


#endif // TEMPLATE_H_INCLUDED
