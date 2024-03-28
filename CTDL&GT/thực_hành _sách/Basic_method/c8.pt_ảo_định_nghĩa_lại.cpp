#include<iostream>
#include <stdio.h>

/*8.5.Phương thức ảo
a.Phương thức được định nghĩa lại:
    Lớp dẫn xuất định nghĩa lại phương thức của lóp
    cơ sở
Sử dụng toán tử xác định phạm vi :: định nghĩa
lại
Cấu trúc:
    derived_object.baseclass_name::method_name(...)

Phương thức của lớp dẫn xuất gọi phương thức định nghĩa lại của lớp cơ sở
sử dụng từ khóa base
cấu trúc:
    base.method_name(...);

vd:Lớp dẫn xuất GiangVien định nghĩa lại phương thức
Loai() của lướp cơ sở NhanVien. Đối tượng nv thuộc lớp
Nhanvien , đối tượng gv thuộc lớp GiangVien.
nv.Loai() gọi phương thức Loai() của lớp NhanVien và gv.Loai()
gọi phương thức Loai() của lớp GiangVien.
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

   string Loai()
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

    string Loai()
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

cout<<"Loai co so :"<<gv.NhanVien::Loai()<<endl;
//gán giá trị gv cho nv
nv=gv;
cout<<"Doi tuong nv"<<endl;
nv.Display();
cout<<"Loai : "<<nv.Loai()<<endl;
    return 0;
}
