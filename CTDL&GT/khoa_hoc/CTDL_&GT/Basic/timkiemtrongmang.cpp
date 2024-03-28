#include <iostream>

// iostream : in out
/*
Viết hàm nhập vào một mảng , hàm xuất mảng đó ra
xuất những số nguyên tố trong mảng đó ra màn hình
*/
using namespace std;

int xuatmang(int a[] , int n)
{
    for(int i =1;i<=n;i++)
    {
        cout<<"A["<<i<<"]="<<"\t";
        cin>>a[i];
    }
return 0;
}

int Timkiem(int a[],int n, int x)
{
    for(int i =0;i<n;i++)
    {
        if(a[i]==x)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[100];
    int n;
    int x;
    cout<<"Nhap n: "<<endl;
    cin>>n;
    cout<<"Xuat mang"<<endl;
    xuatmang(a,n);
    cout<<"Nhap X:"<<endl;
    cin>>x;
    if(Timkiem(a,n,x)==1){
        cout<<"X CO TRONG MANG\n"<<endl;
    }else{
      cout<<"X KHONG CO TRONG MANG\n"<<endl;
    }

  return 0;

}




