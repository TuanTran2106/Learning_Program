#include<iostream>
#include <stdio.h>
//Cấp phát,giải phóng vùng nhớ
//Cấu trúc: int* p = new int;
//với dạng số thì truy xuất:
//q=10;20;...
//với dạng có cấu trúc: q ->Day=20;
//q->Month =12;

//Ví dụ xuất ngày tháng năm cấp phát bộ nhó
using namespace std;
/*struct Date
{
    int Day;
    int Month;
    int Year;
};
*/

//Ví dụ:Xuất ra mảng thông tin sinh viên sử dụng cấp phát vùng nhớ
struct SinhVien
{
    int Masv;
    string Hoten;
};


int main() {

/*Date* p = new Date;
p->Day =20;
p ->Month =10;
p->Year =2022;

cout<<"Ngay nha giao Viet Nam la:"<<p->Day<<"/"<<p->Month<<"/"<<p->Year<<endl;
*/

SinhVien* sv = new SinhVien[5];

sv[0].Masv= 211259;
sv[0].Hoten ="Tran Duc Tuan";
cout<<"MSSV :"<<sv[0].Masv<<endl;
cout<<"Hoten :"<<sv[0].Hoten;


    return 0;
}


