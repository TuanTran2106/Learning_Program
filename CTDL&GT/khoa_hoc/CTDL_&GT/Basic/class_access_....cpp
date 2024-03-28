#include<iostream>
//Hàm friend với 2 lớp , tìm giá trị nhỏ nhất thuộc lớp nào
using namespace std;

class Nguoi
{
protected:
    string ten;
    int tuoi;
public:
    void noichuyen()
    {
        cout<<"noi chuyen"<<endl;
    }
};
class Sinhvien : public Nguoi
{
    string mssv;
public:
    Sinhvien()
    {
        ten = "Tuan";
        tuoi =19;
        mssv ="2112590";

    }
    void xuat()
    {
        cout<<"Ten :"<<ten<<"-Tuoi:"<<tuoi<<"-MSSV:"<<mssv;
    }
};


int main() {
  // Sinhvien a;
   //a.xuat();
 //a.noichuyen();

 Nguoi *g = new Sinhvien;
 g->noichuyen();
 //Ép kiểu con trỏ
 ((Sinhvien*)g) ->xuat();
return 0;
}


