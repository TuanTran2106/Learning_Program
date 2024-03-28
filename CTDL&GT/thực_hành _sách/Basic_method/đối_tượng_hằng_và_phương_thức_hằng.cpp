#include<iostream>
#include <stdio.h>
//7.6.Đối tượng hằng và phương thức hằng
//1.Phương thức hằng
/*Cấu trúc: return_type method_name(list_of_parameter) const
Vd:
    void Display() const
*/

//Sử dụng GetInfo() điều hướng phương thức hằng
using namespace std;

class SinhVien
{
public :
    string Hoten;
    int MaSV;
    int Tuoi;

SinhVien (string ht, int masv, int t)
{
    Hoten = ht;
    MaSV =masv;
    Tuoi =t;
}

int GetInfo() const
{
    return Tuoi;
}

int GetInfo()
{
    return MaSV;
}
void Display() const
{
    cout<<"Ma Sinh Vien"<<MaSV<<endl;
    cout<<"Ho Va Ten"<<Hoten<<endl;
    cout<<"Tuoi"<<Tuoi<<endl;
}

/*void SetMasv(int n) const
{
    MaSV =n;
}
*/
};

int main() {
SinhVien sv1("Tran Duc Tuan",1,19);
//có thể thay đổi mã của sv1
sv1.MaSV =4;

//sv1.Display();
cout<<"Ma SV moi la:"<<sv1.GetInfo()<<endl;

const SinhVien sv2("Tran B",2,22);
//sv2.Display();
cout<<"Tuoi cua SV2 la:"<<sv2.GetInfo()<<endl;
    return 0;
}

