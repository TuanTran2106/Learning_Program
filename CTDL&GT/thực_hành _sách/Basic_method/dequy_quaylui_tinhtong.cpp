#include<iostream>
#include <stdio.h>
//Bài toán tính giá tri dãy Fibonacci : 0 1 1 2 3 5 8 ...
//sử dụng đệ quy đơn..1 biểu thức Fibonacci

using namespace std;

int Sum(int n)
{
    int s;
    if(n==1)
    {
        s=1;
    }
    else{
        s=n+Sum(n-1);
    }
    return s;
}

int main() {
int n;
cin>>n;
cout<<"Tong"<<endl;
int S=Sum(n);
cout<<S;


return 0;
}







