#include <iostream>
#include <cstdio>
// iostream : in out
/*
Viết hàm nhập vào một mảng , hàm xuất mảng đó ra
xuất những số nguyên tố trong mảng đó ra màn hình
*/
using namespace std;

struct sinhvien
{
    char masv[12];
    char hoten[30];
    char gioitinh[5];
    int tuoi;
    float diem;
};

void Nhap1SV(sinhvien &sv)
{

  cout<<"NHAP MASV:";
  gets(sv.masv);
  cout<<"NHAP HOTEN:";
  fflush(stdin);
  gets(sv.hoten);
  cout<<"NHAP GIOITINH:";
  fflush(stdin);
  gets(sv.gioitinh);
  cout<<"NHAP TUOI:";
  cin>>sv.tuoi;
  cout<<"NHAP DIEM:";
  cin>>sv.diem;
}

void Xuat1SV(sinhvien &y)
{
    cout<<"MASV:"<<y.masv<<endl;
  cout<<"HO TEN:"<<y.hoten<<endl;
  cout<<"GIOI TINH:"<<y.gioitinh<<endl;
  cout<<"TUOI:"<<y.tuoi<<endl;
  cout<<"DIEM:"<<y.diem<<endl;
}
int main()
{
    sinhvien x;
    Nhap1SV(x);


  //xuat du lieu
   Xuat1SV(x);
}




