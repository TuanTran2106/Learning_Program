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

void nhap1vt( int &x1, int &x2, int &x3)
{
    cout<<"NhAP x1, x2, x3"<<endl;
    cin >>x1>>x2>>x3;
}
int tichvohuong (int x1, int x2, int x3,int y1,int y2,int y3)
{
    return x1*y1+x1*y2+x1*y3;
}

double Q(int x, int n)
{
    double T=sqrt(exp(x)+n);
    for (int i=1;i<=n;i++)
    {
        T = T + (x/pow(5,i));
    }
    return T;
}
int main()
{

    int x1,x2,x3,y1,y2,y3;
    int n;
    float x;
    nhap1vt(x1,x2,x3);
    nhap1vt(y1,y2,y3);
    cout<<"Tich vo huong"<<tichvohuong(x1,x2,x3,y1,y2,y3);

    cout<<"Nhap n:";
    cin>>n;
    cout<<"\nNhap x";
    cin>>x;
    cout<<"Gia trị cua Q="<<Q(x,n);
    return 0;


}




