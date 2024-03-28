#include<iostream>
#include <stdio.h>
//Bài toán tìm USCLN của 2 số a và b đệ quy
//ƯỚC số chung lớn nhất là số nguyên dương lớn nhất mà cả a và b cùng chia hết

using namespace std;
int USCLN(int a, int b)
{
    int kq;
    if(b==0)
    {
        kq=a;
    }else
    {
        kq=USCLN(b,a%b);
    }
    return kq;
}



int main() {
    int a;
    int b;
  cout<<"Nhap gia tri a b:"<<endl;
  cin>>a;
  cin>>b;
  //Dùng hàm bao đóng
  if(a>=0 &&b>=0)
  {
      int gt = USCLN(a,b);
      cout<<"Uoc so chung lon nhat cua "<<a<< "va"<< b <<"la:\n"<<gt<<endl;
      }

/*C2:
     int n=USCLN(a,b);
      cout<<"Uoc so chung lon nhat cua "<<a<< "va"<< b <<"la:\n"<<n<<endl;
*/
return 0;
}







