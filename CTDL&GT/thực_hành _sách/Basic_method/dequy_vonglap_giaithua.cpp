#include<iostream>
#include <stdio.h>


using namespace std;
int Giaithua(int n)
{
    int kq=1;
    int i;
    if(n==0||n==1)
    {
        kq=1;
    }
    else if(n>1)
        {

            for(i =2;i<=n;i++)
            {
                kq=kq*i;
            }

        }
        return kq;
}

int main() {
   int n;
   cin>>n;
   cout<<"Ket qua:"<<endl;
   int kq = Giaithua(n);
   cout<<kq;
return 0;
}







