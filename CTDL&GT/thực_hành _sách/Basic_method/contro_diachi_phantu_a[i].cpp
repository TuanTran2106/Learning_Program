#include<iostream>
#include <stdio.h>


using namespace std;
 //trả về địa chỉ
 //Cấu trúc : data_type* function_name

 //Vd:Trả về địa chỉ mảng a[i]
 int a[] = {10,20,30,40,50};
 //khởi tạo hàm địa chỉ
 int* Diachi(int i)
 {
     //trả về đại chỉ của mảng a
     return &a[i];
 }

int main() {
 int i=2;
//trả về hàm địa chỉ
 int* p = Diachi(i);
 cout<<"Phan tu thu"<<i<<" la:"<<*p<<endl;
 return 0;
}







