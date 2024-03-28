#include<iostream>
#include <stdio.h>


using namespace std;
//sử dụng con trỏ p trỏ đến vị trí phần tử trong mảng
void Display(int* p , int n)
{
    //con trỏ p không phải là một giá trị mà chỉ là 1 địa chỉ
    if(p!=NULL)
    {
        for(int i=0;i<n;i++)
        {
            cout<<p[i]<<"    ";
        }
    }
}
int main() {
  int n =5;
  int a[] = {10 ,20,30,40,50};
  Display(a,n);
return 0;
}







