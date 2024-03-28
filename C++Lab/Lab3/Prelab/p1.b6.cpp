#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

template<class T>
class Cell
{
protected:
    T info;
public:
    void set(T x)
    {
        info=x;
    }
    T get(){return this->info;};
};
enum Color{White, Yellow,Black,Red,Blue};

template<class T>
class ColoredCell: public Cell<T>
{
private:
    Color color;
public:
    void setColor(Color c)
    {
        color =c;
    }
    Color getColor()
    {
        return color;
    }
    T* get()
    {
        if(color!=White)
        {
            return& (this->info);
        }
        else
        {
            return NULL;
        }
    }
};
int main()
{
    int test,c;
    cin>>test>>c;
    ColoredCell<int>* a=new ColoredCell<int>();
    switch(test)
    {
    case 1:
        a->setColor(Color(c));
        cout<<int(a->getColor());
        break;
    case 2:
        a->setColor(Color(c));
        a->set(10);
        if(a->get()==NULL)
        {
            cout<<"null"<<endl;
        }
        else cout<<*(a->get());
    default:
        break;
    }
    return 0;
}
