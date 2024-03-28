#include<iostream>
//Hàm friend với 2 lớp , tìm giá trị nhỏ nhất thuộc lớp nào
using namespace std;

 class Lop2;
 class Lop1 {

    int a;
public:
    void ThietLapGiaTriA(int a) {
      this ->a =a;

      cout<<"Lop 1 , a ="<<a<<endl;
    }
      friend void TimGTNN(Lop1,Lop2);


 };
 class Lop2 {

    int b;
public:
    void ThietLapGiaTriB(int b) {
      this ->b =b;
      cout<<"Lop 2 , b ="<<b<<endl;
    }
      friend void TimGTNN(Lop1,Lop2);


 };

 void TimGTNN(Lop1 l1,Lop2 l2)
 {
     if(l1.a<l2.b)
     {
         cout<<"Gia tri nho nhat la:"<<endl;
         cout<<l1.a<<endl;
     }else
     {
          cout<<"Gia tri nho nhat la:"<<endl;
          cout<<l2.b<<endl;
     }
 }
int main() {
 Lop1 l1;
 Lop2 l2;
 l1.ThietLapGiaTriA(5);
 l2.ThietLapGiaTriB(7);
 TimGTNN(l1,l2);
 return 0;

}


