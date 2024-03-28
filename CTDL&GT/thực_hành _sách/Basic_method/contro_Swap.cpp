#include<iostream>
#include <stdio.h>


using namespace std;
void Swap(int* a,int* b)
{
    int temp;
    temp = *a;
    *a =*b;
    *b= temp;
}

int main() {
  int a=5;
  int b=9;
  int* a1 =&a;
  int* b1 =&b;
  cout<<"Gia tri ban dau cua 2 bien a, b la:"<<a<<";"<<b<<endl;
  //Swap(&a,&b);
  Swap(a1,b1);
  cout<<"Gia tri moi:";
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;

return 0;
}







