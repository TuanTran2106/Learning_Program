#include<iostream>
#include <stdio.h>
//7.7.Biến lớp :là biến đưuọc khai báo trong 1 lớp

/*Cấu trúc: gọi
    static data_type class_variable;

truy xuất:
    class_name::class_variable

Gán giá trị ban đầu:
    data_type class_name::class_variable =initial_value;

 Vd:
     Lớp SV khai báo biến lớp count(tính tổng số sinh viên):được gán giá
     trị ban đầu là 0.
*/
using namespace std;
class SinhVien
{

public:
    static int count;
        int MaSV;
    string Hoten;

    SinhVien(string ht);
    void Display();
};
//gán giá trị 0 cho biến count
int SinhVien::count =0;
//Phương thức tạo của lớp Sinh viên

SinhVien::SinhVien(string ht)
{
    //tăng biến count lên
    ++count;
    //gán biến count cho MaSV
    MaSV = count;
}

//Tạo phương thức Display
void SinhVien::Display()
{
    cout<<"Ma Sinh Vien "<<MaSV<<endl;
    cout<<"Ho Va Ten "<<Hoten<<endl;
}

int main() {
    SinhVien sv1("Tran Duc Tuan");
    SinhVien sv2("Tran B");
  sv1.Display();
  sv2.Display();
  //truy xuất biến count

  cout<<"Tong so sinh vien: "<<SinhVien::count<<endl;

    return 0;
}
/*
Lưu ý:
Không thể gán giá trị ban đầu cho biến thuộc tính
public:
    int MaSV =1;
    string HoTen;
    */
