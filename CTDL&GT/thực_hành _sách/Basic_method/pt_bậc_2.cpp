#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
// iostream : in out
/*
Viết hàm nhập vào một mảng , hàm xuất mảng đó ra
xuất những số nguyên tố trong mảng đó ra màn hình
*/
using namespace std;

void giaiphuongtrinh(int a, int b, int c)
{  double x;
 double delta;
    if(a==0)
    {
        if(b==0 && c!=0)
        {
            cout<<"PHUONG TRINH VO NGHIEM"<<endl;
        }
       else if (b==0 &&c==0){
            cout<<"PHUONG TRINH CO VO SO NGHIEM"<<endl;
        }
        else {
                cout<<"NGHIEM CUA PHUONG TRINH:"<<endl;
            x =-c/b;
            cout<<x;
        }
    }
    else{
        delta = b*b-4*a*c;
        if(delta<0)
        {
            cout<<"PHUONG TRINH VO NGHIEM"<<endl;
        }
        else if(delta ==0)
        {
            cout<<"PHUONG TRINH CO NGHIEM KEP"<<endl;
            x=-b/2*a;
            cout<<x;
        }
        else{
            cout<<"PHUONG TRINH CO 2 NGHIEM PHAN BIET"<<endl;
            double x1=(-b+sqrt(delta))/2*a;
            double x2=(-b-sqrt(delta))/2*a;
            cout<<"NGHIEM x1="<<x1<<endl;
            cout<<"NGHIEM x2="<<x<<endl;
        }

    }

}
int main()
{
 int a,b,c;
 cout<<"Nhap 3 so :"<<endl;
 cin>>a>>b>>c;
 cout<<"Giai phuong trinh" <<a<<"x^2+"<<b<<"x+"<<c<<endl;
 cout<<"Ket qua"<<endl;
 giaiphuongtrinh(a,b,c);


}




