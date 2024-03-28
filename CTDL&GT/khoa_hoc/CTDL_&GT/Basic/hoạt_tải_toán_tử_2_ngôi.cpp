#include<iostream>
#include <stdio.h>
//Hoạt tải toán tử 2 ngôi có 2 dạng:
//+ , -
//*,/
//Đề: Cộng 2 số phức

using namespace std;
class SoPhuc
{
public :
    double PhanThuc;
    double PhanAo;

SoPhuc(double Thuc,double Ao)
{
    PhanThuc =Thuc;
    PhanAo =Ao;
}

void Display()
{
    if(PhanAo>0)
    {
         cout<<PhanThuc<<" +i*"<<PhanAo<<endl;
    }else{
        cout<<PhanThuc<<" -i*"<<-PhanAo<<endl;
    }

}
SoPhuc operator + (const SoPhuc&b)
{
    SoPhuc kq(this->PhanThuc +b.PhanThuc,this->PhanAo+b.PhanAo);
return kq;
}
};
/*SoPhuc operator + (const SoPhuc& a, const SoPhuc& b)

{
    SoPhuc kq(a.PhanThuc +b.PhanThuc,a.PhanAo +b.PhanAo);
    return kq;
}
*/

int main() {

SoPhuc a(1,2);
SoPhuc b(5,6);

SoPhuc c = a+b;
a.Display();
b.Display();
c.Display();
    return 0;
}
