#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

class ClockType
{
private:
    int hr;
    int min;
    int sec;
public:
    void setTime(int,int,int);
    void getTime(int&,int&,int&) const;
    void printTime() const;
    clockType(int,int,int);
    clockType();

};
ClockType::clockType()
{
    hr=0;
    min=0;
    sec=0;
}
ClockType::clockType(int hr,int min,int sec)
{
    this->hr=hr=5;
    this->min=min=12;
    this->sec=sec=6;
}
void ClockType::setTime(int hr,int min,int sec)
{
    this->hr=hr;
    this->min=min;
    this->sec=sec;
}
void ClockType::getTime(int& hrs,int& mins,int&secs) const
{
    hrs=this->hr;
    mins=this->min;
    secs=this->sec;
}
void ClockType::printTime() const
{
    if(hr<10)
    {
        cout<<"0";
    }
    cout<<hr<<":";
    if(min<10)
    {
        cout<<"0";
    }
    cout<<min<<":";
    if(sec<10)
    {
        cout<<"0";
    }
    cout<<sec;
}
int main()
{
    int hr;
    int min;
    int sec;
    ClockType myClock;
    myClock.setTime(5,4,30);
   // myClock.getTime(hr,min,sec);
    //cout<<"Hours = "<<hr<<", minutes = "<<min<<", second = "<<sec<<endl;
    myClock.printTime();
}
