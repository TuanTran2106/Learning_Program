#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <malloc.h>
#include <time.h>
// iostream : in out
/*
Viết hàm nhập vào một mảng , hàm xuất mảng đó ra
xuất những số nguyên tố trong mảng đó ra màn hình
*/
using namespace std;

class SoPhuc
{
private:
    int thuc;
    int ao;
public :
    SoPhuc()
    {
        thuc =5;
        ao=3;
    }
    void xuat()
    {
        cout<<thuc<<","<<ao<<endl;
    }
    friend void Cong2SoPhuc(SoPhuc a,SoPhuc b);
};

void Cong2SoPhuc(SoPhuc a, SoPhuc b)
{
    SoPhuc c;
    c.thuc = a.thuc +b.thuc;
    c.ao =a.ao +b.ao;
    c.xuat();
}
int main()
{
    SoPhuc a,b,c;
    Cong2SoPhuc(a,b);
  return 0;




  //int a=4;
  //int *p;// *p coi như là biến của con trỏ
  // p =5 : không được vì p là con trỏ không bằng giá trị
  //cấp phát bộ nhớ cho p
  //p =new int;
  //giá trị ô biến p trỏ đến = 5
    //*p= 5;
    //giải phóng bộ nhớ cho p
    //delete p;

  //p = (int*)malloc(sizeof(int));
 // free(p);

  //cout<<a<<endl;
  //cout<<*p;
/*int sum=0;
  int i=1;
  repeat:
      sum = sum +i;
      i++;
    if (i<=5)
        goto repeat;
        cout<<"Tong"<<endl;
  cout<<sum;
*/
}




