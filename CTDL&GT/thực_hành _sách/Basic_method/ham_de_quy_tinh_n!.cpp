#include<iostream>
#include <stdio.h>
//Bài toán dây  thừa sử dụng đệ quy
using namespace std;

unsigned long  Giaithua(int n)
{
    unsigned long kq;
    if(n==0)
    {
        kq=1;
    }else
    {
        //Không là đệ quy đuôi do biểu thức n*...
        kq=n*Giaithua(n-1);
    }
return kq;

}

int main() {
  int n ;
  cout<<"Nhap n: "<<endl;
  cin>>n;
  cout<<"Giai thua cua\n"<<n<<"la:\n";
  if(n>=0)
  {
      //HÀM ĐẸ QUY
      unsigned long gt =Giaithua(n);
      cout<<n<<"!= "<<gt<<endl;
  }
return 0;
}







