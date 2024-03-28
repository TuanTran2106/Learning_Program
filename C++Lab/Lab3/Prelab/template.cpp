#include "template.h"

template<class T>
CreateList<T>::CreateList(int size)
{
    this->size=size;
    this->top=-1;
    this->a=new T[size];
}
template<class T>
CreateList<T>::~CreateList()
{
    delete[] a;
    a=NULL;
}
template<class T>
bool CreateList<T>::isEmpty() const
{
    return top==-1;
}
template<class T>
bool CreateList<T>::isFull() const
{
    return top==size-1;
}
template<class T>
void CreateList<T>::Push(T item)
{
    if(!isFull())
    {
        a[++top]=item;
    }
}
template <class T>
T CreateList<T>::Pop()
{
    if(!isEmpty())
    {
        return a[--top];
    }
}
/*
template class CreateList<int>;
template class CreateList<double>;
*/
template class CreateList<char>;

