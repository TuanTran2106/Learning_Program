#include <iostream>
#include <cstdio>
#include <string.h>
// iostream : in out
/*
Viết hàm nhập vào một mảng , hàm xuất mảng đó ra
xuất những số nguyên tố trong mảng đó ra màn hình
*/
using namespace std;

struct doanhnghiep
{
   char madoanhnghiep[20];
   char giamdoc[20];
   float vondieule;
   int sonhanvien;
};

void nhapdoanhnghiep( doanhnghiep &x)
{
    cout<<"Ma Doanh Nghiep ";
    fflush(stdin);
    gets(x.madoanhnghiep);
    cout<<"Ten Giam Doc ";
    fflush(stdin);
    gets(x.giamdoc);
    cout<<"Von Dieu Le ";
    cin>>x.vondieule;
    cout<<"So Nhan Vien ";
    cin>>x.sonhanvien;
  cout<<endl;
}
void xuatdoanhnghiep(doanhnghiep &y)
{
    cout<<endl;
    cout<<"Ma Doanh Nghiep "<<y.madoanhnghiep<<endl;
    cout<<"Ten Giam Doc "<<y.giamdoc<<endl;
    cout<<"Von Dieu Le "<<y.vondieule<<endl;
    cout<<"So Nhan Vien "<<y.sonhanvien<<endl;
}

void nhapdanhsach(doanhnghiep a[], int n)
{
    for (int i =0;i<n;i++)
    {
        nhapdoanhnghiep(a[i]);
    }
}
void xuatdanhsach(doanhnghiep a[], int n)
{
    for (int i =0;i<n;i++)
    {
        xuatdoanhnghiep(a[i]);
    }
}
void sapxep(doanhnghiep a[],int n)
{
     doanhnghiep doi;
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i].vondieule>a[j].vondieule)
            {
                doi = a[i];
                a[i]= a[j];
                a[j]= doi;
            }
        }
    }

}
void indn(doanhnghiep y)
{
    cout<<"MDN:"<<y.madoanhnghiep<<endl;
    cout<<"So NV:"<<y.sonhanvien<<endl;
}

void inmadn(doanhnghiep a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i].sonhanvien>300 && a[i].madoanhnghiep[0]=='D' && a[i].madoanhnghiep[1]=='N')
      {
          indn(a[i]);
    }
    }
}

int kiemtradaucach(char madoanhnghiep[])
{
    for(int i=0; i<strlen(madoanhnghiep);i++)
    {
        if(madoanhnghiep[i]==' ')
        {
            return 1;
        }
        return 0;
    }
}
void demKhongHop(doanhnghiep a[], int n)
{ int dem =0;
    for(int i=0;i<n;i++)
    {
        if(a[i].vondieule<10|| kiemtradaucach(a[i].madoanhnghiep)==1 )
    dem++;
    }
    cout<<"SO DOANH NGHIEP KHONG HOP LE"<<dem<<endl;
}
int main()
{
    doanhnghiep a[100];
    int n;
    int x;
    cout<<"Nhap n"<<endl;
      cin>>n;
    cout<<"Nhap Doanh Nghiep"<<endl;
    nhapdanhsach(a,n);
    cout<<"Danh sach vưa nhap la:"<<endl;
    xuatdanhsach(a,n);
   sapxep(a,n);
    cout<<"Danh sach sau khi sap xep"<<endl;
    xuatdanhsach(a,n);

    cout<<"\n Doanh ngiep trên 20 mv và ma là DN"<<endl;
    inmadn(a,n);
     demKhongHop(a,n);



}




