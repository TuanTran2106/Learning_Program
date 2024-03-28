#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
using namespace std;
bool isSpecialNumber(int n)
{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==0)
        {
            if(n<=10)
            {
               return true;
            }
            else
            {
                int tong=0;
                int m=n;
                while(m!=0)
                {
                    tong+=m%10;
                    m/=10;
                }
                int count1=0;
                for(int i=2;i<tong;i++)
                {
                    if(tong%i==0)
                    {
                        count1++;
                    }
                }
                if(count1==0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
}

int main()
{
    int n;
    cin>>n;
    cout<<isSpecialNumber(n);
}
