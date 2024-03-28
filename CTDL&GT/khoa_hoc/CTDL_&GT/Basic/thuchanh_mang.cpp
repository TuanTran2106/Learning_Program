#include <iostream>
// iostream : in out
/*
Viết hàm nhập vào một mảng , hàm xuất mảng đó ra
xuất những số nguyên tố trong mảng đó ra màn hình
*/
using namespace std;
void nhapmang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>a[i];
    }
}

void xuatmang(int a[],int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
int kiemtraSNT(int x)
{
    int dem =0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            dem++;
        }
    }
    if(dem==2)
    {
        return 1;
    }
    return 0;
}

void xuatSNT(int a[], int n)
{
    cout<<"SO NGUYEN TO TRONG MANG"<<endl;
    for(int i=0;i<=n;i++)
    {
        if(kiemtraSNT(a[i])==1)
        {
            cout<<a[i]<<"\t"<<endl;
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"Nhap n=";
    cin>>n;
    cout<<"\nNhap mang\n";
    nhapmang(a,n);
    cout<<"\nNhap mang\n";
    xuatmang(a,n);
    xuatSNT(a,n);

}




