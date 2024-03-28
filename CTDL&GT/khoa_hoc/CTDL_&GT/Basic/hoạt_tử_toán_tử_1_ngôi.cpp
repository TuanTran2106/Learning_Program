#include<iostream>
#include <stdio.h>

//Hoạt tải toán tủ 1 ngôi
//Cấu trúc: Function operation Symbol
//Symbol:+ - * /
//Đề :hoạt tải toán tử - biểu diễn số phức và số đối

using namespace std;
class Sophuc
{
    public:
    double PhanThuc;
    double PhanAo;
//phương thức tạo
Sophuc( double Thuc,double Ao)
{
    PhanThuc =Thuc;
    PhanAo = Ao;
}

 void Display()
 {
     if(PhanAo>0)
     {
         cout<<PhanThuc<<" + i*"<<PhanAo<<endl;
     }else
     {
         cout<<PhanThuc<<" - i*"<<-PhanAo<<endl;
     }
 }

 //định nghĩa toán tủ hoạt tải - lấy số đối của só phức

Sophuc operator - ()
{
    Sophuc kq(0, 0);
    kq.PhanThuc = - this ->PhanThuc;
    kq.PhanAo = - this ->PhanAo;
    return kq;
}

};



int main() {
double x,y;
x=10;
y=-x;
cout<<"y = "<<y<<endl;

Sophuc a(1,2);
Sophuc b =-a;
cout<<"So phuc a : ";
a.Display();
cout<<"So phuc b : ";
b.Display();


    return 0;
}


