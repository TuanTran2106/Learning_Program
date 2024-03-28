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

void SORT(int a[], int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1; j<n;j++)
        {
            if ( a[i]<a[j])
                {
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
   int a[100];
   int n;
   cout<<"Nhap N:"<<endl;
   cin>>n;
   cout<<"Nhap mang"<<endl;
   nhapmang(a,n);
   cout<<"Xuat mang"<<endl;
   xuatmang(a,n);

   SORT(a,n);
   cout<<"Mang sap xep:"<<endl;
   xuatmang(a,n);
}




