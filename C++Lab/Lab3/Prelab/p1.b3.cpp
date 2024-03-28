#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
/*
class Room
{
public:
    Room(double length,double width,double height);
    double calculateArea();
    double calculateVolume();
private:
    double width;
    double height;
    double length;
};

Room::Room(double length,double width,double height)
{
    this->length=length;
    this->width=width;
    this->height=height;
}
double Room::calculateArea()
{
    return (this->width*this->length);
}
double Room::calculateVolume()
{
    return (this->width*this->height*this->length);
}
int main()
{
    cout<<"Constructor Test";
    Room r(20,3,4);
    Room *r2=new Room(10.5,5.5,5.4);
    delete r2;
    cout<<r.calculateArea();
}
*/

class Integer
{
private:
    int val;
public:
    Integer(int val);
    void setValue(int);
    int getValue() const;
};

Integer::Integer(int val)
{
    this->val=val;
}
void Integer::setValue(int val)
{
    this->val=val;
}
int Integer::getValue() const
{
    return this->val;
}
int main()
{
    cout<<"T";
    Integer i(10);
    //Integer i2(-20);
    //Integer* i3=new Integer(20);
    //delete i3;
    cout<<i.getValue();
}
