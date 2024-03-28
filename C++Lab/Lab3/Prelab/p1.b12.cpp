#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

class clockType
{
public:
    void setTime(int,int,int);
    bool equalTime(const clockType&) const;
    clockType(int,int,int);
    clockType();
private:
    int hr;
    int min;
    int sec;
};

void clockType::setTime(int hr,int min,int sec)
{
    this->hr=hr;
    this->min=min;
    this->sec=sec;
}
bool clockType::equalTime(const clockType& myclock) const
{
    if(myclock.hr==this->hr&&
       myclock.min==this->min
       &&myclock.sec==this->sec)
    {
        return true;
    }
    else
        return false;
}
clockType::clockType(int hr,int min ,int sec)
{
    this->hr=hr;
    this->min=min;
    this->sec=sec;
}
clockType::clockType()
{
    this->hr=5;
    this->min=2;
    this->sec=30;
}
int main()
{
    clockType yourClock;
    clockType myClock(5,2,30);
    if(myClock.equalTime(yourClock))
    {
        cout<<"Both times are equal"<<endl;
    }
    else
    {
        cout<<"The two times are not equal"<<endl;
    }
}
