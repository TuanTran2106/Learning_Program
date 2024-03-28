#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
// iostream : in out
/*
Viết hàm nhập vào một mảng , hàm xuất mảng đó ra
xuất những số nguyên tố trong mảng đó ra màn hình
*/
using namespace std;

struct Sinhvien
{
    int masv;
    string ten;
};

void nhapSinhVien(Sinhvien &a)
{
    cout<<"Nhap Ma:"<<endl;
    cin>>a.masv;
    cout<<"Nhap Ten:"<<endl;
    fflush(stdin);
    getline(cin,a.ten);
}

void inSV(Sinhvien a)
{   cout<<"\nTHONG TIN\n";
    cout<<a.masv<<endl;
    cout<<a.ten<<endl;

}
int main()
{
    Sinhvien a,b,c;
    queue<Sinhvien> dssv;
    nhapSinhVien(a);
    nhapSinhVien(b);
    nhapSinhVien(c);
    dssv.push(a);
    dssv.push(b);
    dssv.push(c);
    cout<<"In DS SV"<<endl;
    inSV(dssv.front());
     inSV(dssv.back());
     return 0;


    /* stack<int> dayso;
    dayso.push(12);
    dayso.push(13);
    dayso.push(15);
    dayso.push(11);

     //cout<<"size cua stack la"<<dayso.size();
     cout<<"stack rong ko"<<dayso.empty();
     dayso.pop();
     dayso.pop();
    cout<<dayso.top();
    return 0;
    */

    /* queue<int> ds;
    ds.push(12);
    ds.push(13);
    ds.push(14);
    ds.push(15);

    //cout<<ds.back()<<endl;
    ds.pop();
     cout<<ds.front()<<endl;
     cout<<" 0 la khong rong 1 la rong"<<ds.empty()<<endl;
*/


}




