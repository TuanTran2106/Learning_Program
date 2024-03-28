#include<iostream>
#include <stdio.h>
/*
//trả về địa chỉ của biến cục bộ x2
using namespace std;
//p khoog phải là hằng số
//tham khảo đến n là hằng số và giá trị của biến n không thay đổi
//có thể tham khảo  đến biến m

int main() {

int n=5;
cout<<"n = "<<n<<endl;
//lẹnh chính
const int* p;
p =&n;

cout<<"n= "<<*p<<endl;

int m=20;
p=&m;
cout<<"m= "<<*p<<endl;




return 0;
}
*/
using namespace std;
//con trỏ p là hằng , tham khảo đến biến n(không là hằng) , không thể tham khả đến biến m
int main() {
  int n=5;
  cout<<" n= "<<n<<endl;
  //lệnh chính
  int* const p=&n;

  *p=10;

  cout<<" n =" <<*p<<endl;

 // int m=20;
  // p=&m;
 // cout<<" m="<<*p<<endl;



    return 0;
}

//con trỏ là hằng , khai báo đến địa chỉ là hằng , không khai dbaos đến địa chỉ khác
cấu trúc:
    const int* const p = &n;


