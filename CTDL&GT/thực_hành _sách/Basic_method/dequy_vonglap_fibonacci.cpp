#include<iostream>
#include <stdio.h>


using namespace std;

int Fibonacci(int n)
{
int kq;
    if(n<=1)
    {
        kq=n;
    }
    else{
    int fn2=0;
    int fn1=1;
    int fn;
    for(int i=2;i<=n;i++)
    {
        fn=fn2+fn1;
        fn2=fn1;
        fn1=fn;
    }
    kq=fn;
    }
return kq;

}

int main() {
   int n;
   cout<<"Nhap n:"<<endl;
   cin>>n;
   int kq = Fibonacci(n);
   cout<<kq;
return 0;
}







