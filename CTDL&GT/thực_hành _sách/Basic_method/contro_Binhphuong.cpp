#include<iostream>
#include <stdio.h>


using namespace std;
//tham số p gọi là con trỏ
void BinhPhuong(int* p)
{

    *p = *p**p;

}

int main() {
  int n =5;
  //Sử dụng con trỏ pn thay cho tham trị n
  int* pn = &n;
  cout<<"Gia tri cua n:"<<n<<endl;
  //truyền bằng con trỏ
  //BinhPhuong(&n);
  BinhPhuong(pn);
  cout<<"Gia tri binh phuong"<<n<<endl;
return 0;
}







