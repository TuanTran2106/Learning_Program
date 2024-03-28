#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

template<typename T>
class Array
{
public:
    Array(int size,T initValue);
    ~Array();
    void print();
    Array(const Array<T>& other);
    Array<T> & operator=(const Array<T>& other);
private:
    int size;
    T * p;
};

template<typename T>
Array<T>::Array(int size,T initValue)
{
    this->size=size;
    p=new T[size];
    for(int i=0;i<size;i++)
    {
        *(p+i)=initValue;
    }
}
template<typename T>
Array<T>::~Array()
{
    delete[] p;
}

template<typename T>
Array<T>::Array(const Array<T>& other)
{
    this->size=other.size;
    p= new T[size];
    for(int i=0;i<size;i++)
    {
        p[i]=other.p[i];
    }
    cout<<"Call copy constructor"<<endl;
}

template<typename T>
 Array<T>& Array<T>::operator=(const Array<T>& other)
{
    /*
    if(this==&other)
    {
        return *this;
    }
    delete[] p;
    */
    this->size=other.size;
    p= new T[size];
    for(int i=0;i<size;i++)
    {
        p[i]=other.p[i];
    }
    cout<<"Call assignment operator";
    //return* this;
}


template<typename T>
void Array<T>::print()
{
    this->size=size;
    for(int i=0;i<size;i++)
    {
        cout<<*(p+i)<<" ";
    }
}
int main()
{
  Array<int> * a5=new Array<int>(1,2);
  Array<int> * a6=new Array<int>(12,5);
  *a5 = *a6;
  delete a6;
  a5->print();
  delete a5;
}
