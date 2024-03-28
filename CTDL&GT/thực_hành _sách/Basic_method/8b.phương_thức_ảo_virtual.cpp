#include<iostream>
#include <stdio.h>
/*
8b.Phương thức ảo :(hàm ảo)
 là 1 phương thức mà hành vi của nó có thể được định nghĩa lại
 ở bên trong một lớp dẫn xuất bới một phương thức
 Phương thức ảo được khai báo với từ khóa virtual.
 Cấu trúc:
      public: virtual return_type method_name (...)
      {
          ...
      }

      Từ khóa virtual : thừa kế cho tất cả các lớp trực tiếp và các lớp gián tiếp

      Lớp dẫn xuất:
          public override return_type method_name (...) {...}

          Vd:
              Phương thức Loai() là phương thức ảo .Khi gán đối tượng gv của lớp dẫn
              xuất GiangVien cho đối tượng nv của lớp cơ sở NhanVien
              thì đối tượng nv vẫn gọi phương thức Loai() của lớp cơ sở
              NhanVien.

              */


using namespace std;
class NhanVien
{
public :
    int MaNV;
    string HoTen;

    NhanVien (int ma, string ht)
    {
        MaNV =ma;
        HoTen =ht;
    }
   //phương thức điịnh nghĩa lại

   virtual string Loai()
   {
       return "Nhan vien";
   }

   void Display()
   {
       cout<<"Ma nhan vien :"<<MaNV<<endl;
       cout<<"Ho va ten :"<<HoTen<<endl;
   }
};

class GiangVien : public NhanVien
{
public:
    GiangVien(int ma, string ht)
    : NhanVien(ma,ht)
    {

    }

    virtual string Loai()
    {
        return"Giang vien";
    }

};


int main() {

NhanVien nv(1,"Tran b");
cout<<"Doi tuong nv"<<endl;
nv.Display();
cout<<"Loai :"<<nv.Loai()<<endl;

GiangVien gv(2,"Tran D");
cout<<"Doi tuong gv"<<endl;
gv.Display();
cout<<"Loai : "<<gv.Loai()<<endl;

//không thế :
// NhanVien nv =gv
/*C1 nv=gv;
nv.Display();
cout<<"Loai :"<<nv.Loai()<<endl;
*/
//C2:
 NhanVien nv1=gv;
nv1.Display();
cout<<"Loai :"<<nv1.Loai()<<endl;
    return 0;
}
