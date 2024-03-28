#include<iostream>
#include <stdio.h>


using namespace std;

int USCLN(int a, int b)
{
    while(b!=0)
    {
        int r=a%b;
        a=b;
        b=r;

    }
    return a;
}

int main() {
   int a,b;
   cin>>a>>b;
   int kq=USCLN(a,b);
   cout<<kq;
return 0;
}







