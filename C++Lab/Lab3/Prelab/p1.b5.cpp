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
    Array(int size, T initValue);
    ~Array();
    Array(const Array<T>& other);
    void print();
private:
    int size;
    T* p;
};

template< typename T>
void Array<T>::print()
{
    for(int i=0;i<this->size;i++)
    {
        cout<<(i>0 ?" ":"")<<this->p[i];
    }
    cout<<endl;
}

template<typename T>
Array<T>::Array(const Array<T>&other)
{
    if(this->size!=other.size)
    {
        delete[] this->p;
        p=nullptr;
        this->size=0;
        p=new int[other.size];
        this->size=other.size;
    }
    for(int i=0;i<this->size;i++)
    {
        this->p[i]=other.p[i];
    }
}
template<typename T>
Array<T>::Array(int size,T initValue)
{
    this->size=size;
    *p=initValue;
}

template<typename T>
Array<T>::~Array()
{
    for(int i=0;i<this->size;i++)
    {
    delete[] (p+i);
    *(p+i)=NULL;
    }
}

template class Array<int>;
int main()
{
    Array<int> *a3;
    Array<int> *a4=new Array<int>(10,3);
    a3=new Array<int>(*a4);
    delete a4;
    a3->print();
    delete a3;
}
