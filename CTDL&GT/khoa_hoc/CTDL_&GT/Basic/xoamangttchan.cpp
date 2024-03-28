#include <iostream>

// iostream : in out
/*
Viết hàm nhập vào một mảng , hàm xuất mảng đó ra
xuất những số nguyên tố trong mảng đó ra màn hình
*/
using namespace std;

void nhapmang( int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>a[i];
    }
}
void xuatmang( int a[], int n)
{
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
int chen(int a[],int n ,int vitricanchen, int socanchen)
{
    for(int i=n;i>vitricanchen;i--)
    {
        a[i]=a[i-1];
    }
    a[vitricanchen] = socanchen;
    n++;
}
void xoa(int a[], int n, int vtxoa)
{
    for(int i =vtxoa; i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}

void xoasochan( int a[], int n , int vtxoa)
{
    for(int i=0;i<n;i++)
    {
        a[i]=a[2*i+1];
    }
}
int main()
{
    int a[100];
    int n;
    int vitricanchen;
    int socanchen;
    int vtcanxoa;
    int vtxoa;
    cout<<"Nhap N: "<<endl;
    cin>>n;
    cout<<"Nhap mang"<<endl;
    nhapmang(a,n);
     cout<<"Xuat mang"<<endl;
    xuatmang(a,n);
    /*
    cout<<"Vi tri can chen";
    cin>>vitricanchen;
    cout<<"So can chen";
    cin>>socanchen;
    chen(a,n,vitricanchen,socanchen);
    xuatmang(a,n);
    */
    cout<<"Xoa"<<endl;

    cin>>vtxoa;
    cout<<"Mang moi"<<endl;
    xoasochan(a,n,vtxoa);

   xuatmang(a,n);
    return 0;

}




