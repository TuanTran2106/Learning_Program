#include<iostream>
#include <stdio.h>
//Bài toán tính giá tri dãy Fibonacci : 0 1 1 2 3 5 8 ...
//sử dụng đệ quy đơn..1 biểu thức Fibonacci

using namespace std;

unsigned long Fibonacci(int n ,unsigned long &fn1 ,unsigned long &fn)
{
    if(n==0)
    {
        fn=0;
    }
    else if(n==1)
    {
        fn1=0;
        fn=1;
    }
    else{
        unsigned long fn2;
        //Đệ quy đơn
        //Hàm Fibonacci tại n ...giá trị cần tìm là Fn

        Fibonacci(n-1,fn2,fn1);
        fn=fn1+fn2;
    }
}


int main() {
int n;
cout<<"Nhap n"<<endl;
cin>>n;

if(n>=0)
{
    unsigned long fn2;
    unsigned long fn1;
 Fibonacci(n,fn2,fn1);
    cout<<"F"<<n<<"="<<fn1<<endl;
}
return 0;
}







