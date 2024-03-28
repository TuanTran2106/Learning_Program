#include<iostream>
#include <stdio.h>

/*8.5.Khuôn mẫu
a.Khuôn mẫu hàm:
Cấu trúc:
   template <class identifier> function_name(...)
   template <typename identifier> function_name(...)

 Phát biểu gọi khuôn hàm theo cú pháp như sau:
     function_name<identifier(kiểu dữ liệu int ,double  , float>(...)

VD: Khai báo khuôn hàm Swap() hoán đổi 2 biến, chúng có thể thuộc kiểu int,double , string,..
*/
/*
using namespace std;

template <typename Kieu>
void Swap(Kieu& a,Kieu& b)
{
    Kieu tam =a;
    a=b;
    b=tam;
}

int main() {

int a=5;
int b=8;
cout<<"a = "<<a<<" b= "<<b<<endl;

Swap<int>(a,b);
cout<<"a = "<<a<< "b= "<<b<<endl;

string x ="diem";
string y ="yeu";

cout<<"x= "<<x<<"y = "<<y<<endl;
Swap<string>(x,y);

cout<<"x = "<<x<<"y= "<<y<<endl;
    return 0;
}
*/

/*
b.Khuôn mẫu lớp :
    Cấu trúc:

template <class identifier> class class_name{...};

Phát biểu khai báo và tạo đối tượng:
class_name<identifier> object_name(...);

Định nghĩa một phương thức của khuôn mẫu lớp theo cú pháp:
  template <class identifier>

  return_type class_name<identifier>::method_name(...)


*/

using namespace std;

const int MaxN =10;
template <class Kieu>
class Mang
{
private:
    int n;
    Kieu Arr[MaxN];
public:
    Mang(Kieu a[],int m)
    {
        n=m;
        for(int i=0;i<n;i++)
        {
            Arr[i]=a[i];
        }
    }
    void Display();
};

int main() {
   int m=5;
   int nguyen [] ={1,2,3,4,5};
   Mang<int> dt1(nguyen,m);
    dt1.Display();


    return 0;
}

//phương thức Display() của khuôn mẫu lớp Mảng

template <class Kieu>
void Mang<Kieu>::Display()
{
    for (int i=0;i<n;i++)
    {
        cout<<Arr[i]<<"  "<<endl;
    }
}
