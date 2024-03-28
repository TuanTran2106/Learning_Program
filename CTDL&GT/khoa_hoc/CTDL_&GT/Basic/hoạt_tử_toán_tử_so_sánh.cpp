#include<iostream>
#include <stdio.h>

//Hoạt tải toán tử so sánh
using namespace std;

class HocLuc
{
public :
    double DiemTB;
    double SoMon;


HocLuc (double diem, double smon)
{
    DiemTB = diem;
    SoMon =smon;
}

bool operator < (const HocLuc& b)
{

    bool kq;
    if(this->DiemTB < b.DiemTB)
    {
        kq =true;
    }else if(this->DiemTB == b.DiemTB && this->SoMon < b.SoMon)

    {
        kq=true;
    }else{
    kq=false;
    }
    return kq;
}

};

int main() {

HocLuc a(8,4);
HocLuc b(7,5);
HocLuc c(8,6);

if(a<b)
{
    cout<<"a<b"<<endl;
}else{
cout<<"a>=b"<<endl;
}
if(a<c)
{
    cout<<"a<c"<<endl;
}else{
cout<<"a>=c"<<endl;
}
    return 0;
}


