#include<iostream>
#include <stdio.h>
//Bài toán tính giá tri dãy Fibonacci : 0 1 1 2 3 5 8 ...


using namespace std;
unsigned long Fibonacci(int n)
{
    int kq;
    if(n<=1)
    {
        kq = n;
    }else
    {
        //Dem phan tu dau tien la phan tu 0, phan tu thu n co gia tri n-1
        // Fibonacci(n-2) = n-1 ;
        // Fibonacci(n-1) = 0 + 1+...+ n-2
        //kq = Fibonacci(n)
        kq= Fibonacci(n-1)+Fibonacci(n-2);
    }
    return kq;
}


int main() {
 int n;
 cout<<"Nhap gia tri cua n:"<<endl;
 cin>>n;
 int a = Fibonacci(n);
 cout<<"Gia tri cua day Fibonacci co "<<n<<"so la: "<<a<<endl;

return 0;
}







